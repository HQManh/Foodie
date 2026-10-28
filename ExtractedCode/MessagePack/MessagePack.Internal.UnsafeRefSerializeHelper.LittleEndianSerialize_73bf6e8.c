// rea decompile_all
// name: MessagePack.Internal.UnsafeRefSerializeHelper$$LittleEndianSerialize
// address: 0x73bf6e8
// body: available
// range: 0x73bf6e8-0x73bf8f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73bf8f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_UnsafeRefSerializeHelper__LittleEndianSerialize
               (undefined8 param_1,long param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  if ((DAT_09520c89 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3028);
    FUN_03f5c2a4(&DAT_091de408);
    FUN_03f5c2a4(&DAT_091de150);
    FUN_03f5c2a4(&DAT_091de160);
    DAT_09520c89 = 1;
  }
  if (0 < (int)param_3) {
    do {
      uVar2 = param_3;
      if (0x19999998 < param_3) {
        uVar2 = 0x19999999;
      }
      auVar13 = MessagePack_MessagePackWriter__GetSpan(param_1,uVar2 * 5,0);
      uVar6 = FUN_04c072b0(auVar13._0_8_,auVar13._8_8_,DAT_091d3028);
      uVar11 = 0;
      uVar12 = 0;
      do {
        puVar7 = (undefined1 *)FUN_04e35cf0(uVar6,uVar11,DAT_091de150);
        puVar8 = (uint *)FUN_04e35d90(param_2,uVar12,DAT_091de160);
        uVar3 = *puVar8;
        cVar5 = (char)uVar3;
        uVar4 = (ushort)(uVar3 >> 8);
        if ((int)uVar3 < 0) {
          if (uVar3 < 0xffff8000) {
            *puVar7 = 0xd2;
            goto LAB_073bf814;
          }
          if ((uVar3 >> 7 & 0x1ff) < 0x1ff) {
            uVar4 = uVar4 & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
            uVar9 = 0xd1;
            goto LAB_073bf838;
          }
          if (0xdf < (uVar3 & 0xff)) goto LAB_073bf864;
          puVar7[1] = cVar5;
          uVar9 = 0xd0;
LAB_073bf880:
          lVar10 = 2;
LAB_073bf884:
          *puVar7 = uVar9;
        }
        else if (uVar3 >> 0x10 == 0) {
          if ((uVar3 & 0xffff) < 0x100) {
            if ((uVar3 >> 7 & 1) != 0) {
              puVar7[1] = cVar5;
              uVar9 = 0xcc;
              goto LAB_073bf880;
            }
            uVar3 = (uint)cVar5;
LAB_073bf864:
            uVar9 = (undefined1)uVar3;
            lVar10 = 1;
            goto LAB_073bf884;
          }
          uVar4 = uVar4 & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
          uVar9 = 0xcd;
LAB_073bf838:
          *puVar7 = uVar9;
          lVar10 = 3;
          *(ushort *)(puVar7 + 1) = uVar4;
        }
        else {
          *puVar7 = 0xce;
LAB_073bf814:
          uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
          lVar10 = 5;
          *(uint *)(puVar7 + 1) = uVar3 >> 0x10 | uVar3 << 0x10;
        }
        uVar12 = uVar12 + 1;
        uVar11 = lVar10 + uVar11;
      } while (uVar2 != uVar12);
      if (uVar11 >> 0x1f != 0) {
        uVar6 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,DAT_091de408);
      }
      MessagePack_MessagePackWriter__Advance(param_1,uVar11 & 0xffffffff,0);
      param_2 = param_2 + (ulong)uVar2 * 4;
      uVar3 = param_3 - uVar2;
      bVar1 = (int)uVar2 <= (int)param_3;
      param_3 = uVar3;
    } while (uVar3 != 0 && bVar1);
  }
  return;
}

