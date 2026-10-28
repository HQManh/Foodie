// rea decompile_all
// name: MessagePack.Internal.UnsafeRefSerializeHelper$$LittleEndianSerialize
// address: 0x73bf2ac
// body: available
// range: 0x73bf2ac-0x73bf47b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73bf478 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_UnsafeRefSerializeHelper__LittleEndianSerialize
               (undefined8 param_1,long param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ushort *puVar7;
  undefined1 uVar8;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  ushort uVar9;
  
  if ((DAT_09520c85 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3028);
    FUN_03f5c2a4(&DAT_091de400);
    FUN_03f5c2a4(&DAT_091de150);
    FUN_03f5c2a4(&DAT_091de158);
    DAT_09520c85 = 1;
  }
  if (0 < (int)param_3) {
    do {
      uVar2 = param_3;
      if (0x2aaaaaa9 < param_3) {
        uVar2 = 0x2aaaaaaa;
      }
      auVar13 = MessagePack_MessagePackWriter__GetSpan(param_1,uVar2 * 3,0);
      uVar5 = FUN_04c072b0(auVar13._0_8_,auVar13._8_8_,DAT_091d3028);
      uVar11 = 0;
      uVar12 = 0;
      do {
        puVar6 = (undefined1 *)FUN_04e35cf0(uVar5,uVar11,DAT_091de150);
        puVar7 = (ushort *)FUN_04e35d40(param_2,uVar12,DAT_091de158);
        uVar9 = *puVar7;
        cVar3 = (char)uVar9;
        if ((short)uVar9 < 0) {
          if (uVar9 >> 7 < 0x1ff) {
            *puVar6 = 0xd1;
            goto LAB_073bf3c4;
          }
          if (0xdf < (uVar9 & 0xff)) goto LAB_073bf3ec;
          puVar6[1] = cVar3;
          uVar8 = 0xd0;
LAB_073bf408:
          lVar10 = 2;
LAB_073bf40c:
          *puVar6 = uVar8;
        }
        else {
          if (uVar9 < 0x100) {
            if ((uVar9 >> 7 & 1) != 0) {
              puVar6[1] = cVar3;
              uVar8 = 0xcc;
              goto LAB_073bf408;
            }
            uVar9 = (ushort)cVar3;
LAB_073bf3ec:
            uVar8 = (undefined1)uVar9;
            lVar10 = 1;
            goto LAB_073bf40c;
          }
          *puVar6 = 0xcd;
LAB_073bf3c4:
          lVar10 = 3;
          *(ushort *)(puVar6 + 1) = uVar9 >> 8 | uVar9 << 8;
        }
        uVar12 = uVar12 + 1;
        uVar11 = lVar10 + uVar11;
      } while (uVar2 != uVar12);
      if (uVar11 >> 0x1f != 0) {
        uVar5 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,DAT_091de400);
      }
      MessagePack_MessagePackWriter__Advance(param_1,uVar11 & 0xffffffff,0);
      param_2 = param_2 + (ulong)uVar2 * 2;
      uVar4 = param_3 - uVar2;
      bVar1 = (int)uVar2 <= (int)param_3;
      param_3 = uVar4;
    } while (uVar4 != 0 && bVar1);
  }
  return;
}

