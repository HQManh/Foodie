// rea decompile_all
// name: MessagePack.Internal.UnsafeRefSerializeHelper$$LittleEndianSerialize
// address: 0x73bfe50
// body: available
// range: 0x73bfe50-0x73c002f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73c002c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_UnsafeRefSerializeHelper__LittleEndianSerialize
               (undefined8 param_1,long param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  if ((DAT_09520c8f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3028);
    FUN_03f5c2a4(&DAT_091de438);
    FUN_03f5c2a4(&DAT_091de150);
    FUN_03f5c2a4(&DAT_091de188);
    DAT_09520c8f = 1;
  }
  if (0 < (int)param_3) {
    do {
      uVar2 = param_3;
      if (0xe38e38d < param_3) {
        uVar2 = 0xe38e38e;
      }
      auVar12 = MessagePack_MessagePackWriter__GetSpan(param_1,uVar2 * 9,0);
      uVar3 = FUN_04c072b0(auVar12._0_8_,auVar12._8_8_,DAT_091d3028);
      uVar10 = 0;
      uVar11 = 0;
      do {
        puVar4 = (undefined1 *)FUN_04e35cf0(uVar3,uVar10,DAT_091de150);
        puVar5 = (ulong *)FUN_04e35f20(param_2,uVar11,DAT_091de188);
        uVar7 = *puVar5;
        if (uVar7 >> 0x20 == 0) {
          uVar6 = (uint)uVar7;
          if ((uVar7 >> 0x10 & 0xffff) == 0) {
            if ((uVar6 & 0xffff) < 0x100) {
              uVar9 = (undefined1)uVar7;
              if ((uVar6 >> 7 & 1) == 0) {
                lVar8 = 1;
              }
              else {
                puVar4[1] = uVar9;
                uVar9 = 0xcc;
                lVar8 = 2;
              }
              *puVar4 = uVar9;
            }
            else {
              *puVar4 = 0xcd;
              *(ushort *)(puVar4 + 1) =
                   (ushort)(uVar7 >> 8) & 0xff | (ushort)((uVar6 & 0xff00ff) << 8);
              lVar8 = 3;
            }
          }
          else {
            uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
            *puVar4 = 0xce;
            *(uint *)(puVar4 + 1) = uVar6 >> 0x10 | uVar6 << 0x10;
            lVar8 = 5;
          }
        }
        else {
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          *puVar4 = 0xcf;
          *(ulong *)(puVar4 + 1) = uVar7 >> 0x20 | uVar7 << 0x20;
          lVar8 = 9;
        }
        uVar11 = uVar11 + 1;
        uVar10 = lVar8 + uVar10;
      } while (uVar2 != uVar11);
      if (uVar10 >> 0x1f != 0) {
        uVar3 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,DAT_091de438);
      }
      MessagePack_MessagePackWriter__Advance(param_1,uVar10 & 0xffffffff,0);
      param_2 = param_2 + (ulong)uVar2 * 8;
      uVar6 = param_3 - uVar2;
      bVar1 = (int)uVar2 <= (int)param_3;
      param_3 = uVar6;
    } while (uVar6 != 0 && bVar1);
  }
  return;
}

