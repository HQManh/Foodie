// rea decompile_all
// name: MoreMountains.FeedbacksForThirdParty.AudioToHapticConverter$$ConvertRumbleData
// address: 0x736891c
// body: available
// range: 0x736891c-0x7368c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7368bf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7368c88 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MoreMountains_FeedbacksForThirdParty_AudioToHapticConverter__ConvertRumbleData
               (long *param_1,undefined4 param_2,undefined4 param_3,long param_4,uint param_5,
               uint param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  long local_c0;
  ulong uStack_b8;
  long local_b0;
  long local_a8;
  double local_98;
  
  if ((DAT_095208d5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091ae8e0);
    FUN_03f5c2a4(&DAT_091ae8f0);
    FUN_03f5c2a4(&DAT_091ae8e8);
    FUN_03f5c2a4(&DAT_09180528);
    DAT_095208d5 = 1;
  }
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  uStack_b8 = (ulong)param_5;
  if ((param_4 != 0) && (*(long *)(param_4 + 0x20) != 0)) {
    local_c0 = FUN_03f5c394(DAT_091801b8,*(undefined4 *)(*(long *)(param_4 + 0x20) + 0x18));
    thunk_FUN_03f5d7b8(&local_c0,local_c0);
    if (*(long *)(param_4 + 0x20) != 0) {
      local_a8 = FUN_03f5c394(DAT_09180528,*(undefined4 *)(*(long *)(param_4 + 0x20) + 0x18));
      thunk_FUN_03f5d7b8(&local_a8,local_a8);
      if (*(long *)(param_4 + 0x20) != 0) {
        local_b0 = FUN_03f5c394(DAT_09180528,*(undefined4 *)(*(long *)(param_4 + 0x20) + 0x18));
        thunk_FUN_03f5d7b8(&local_b0,local_b0);
        lVar6 = *(long *)(param_4 + 0x20);
        if (lVar6 != 0) {
          lVar8 = 8;
          do {
            lVar4 = local_a8;
            lVar3 = local_c0;
            iVar1 = *(int *)(lVar6 + 0x18);
            uVar7 = lVar8 - 8;
            if ((long)iVar1 <= (long)uVar7) {
              if ((param_6 & 1) != 0) {
                MoreMountains_FeedbacksForThirdParty_AudioToHapticConverter__Normalize
                          (param_2,local_a8);
                local_a8 = lVar4;
                thunk_FUN_03f5d7b8(&local_a8,lVar4);
              }
              lVar6 = local_b0;
              if ((param_7 & 1) != 0) {
                MoreMountains_FeedbacksForThirdParty_AudioToHapticConverter__Normalize
                          (param_3,local_b0);
                local_b0 = lVar6;
                thunk_FUN_03f5d7b8(&local_b0,lVar6);
              }
              param_1[1] = uStack_b8;
              *param_1 = local_c0;
              param_1[3] = local_a8;
              param_1[2] = local_b0;
              return;
            }
            if (DAT_09515cf4 == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_09515cf4 = '\x01';
            }
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = (int)param_5 / iVar1;
            }
            dVar10 = (double)iVar2;
            dVar9 = modf(dVar10,&local_98);
            lVar6 = local_a8;
            if (iVar2 < 0) {
              if (dVar9 == -0.5) {
                dVar9 = local_98 + -1.0;
                goto LAB_07368b0c;
              }
              dVar10 = (double)(long)(dVar10 + -0.5);
            }
            else if (dVar9 == 0.5) {
              dVar9 = local_98 + 1.0;
LAB_07368b0c:
              dVar10 = local_98;
              if (((long)local_98 & 1U) != 0) {
                dVar10 = dVar9;
              }
            }
            else {
              dVar10 = (double)(long)(dVar10 + 0.5);
            }
            iVar1 = -0x80000000;
            if (dVar10 != INFINITY) {
              iVar1 = (int)dVar10;
            }
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) <= uVar7) {
LAB_07368c88:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar4 = *(long *)(param_4 + 0x20);
            *(int *)(lVar3 + lVar8 * 4) = iVar1;
            if ((((lVar4 == 0) ||
                 (lVar4 = FUN_057e0998(lVar4,uVar7 & 0xffffffff,DAT_091ae8e8), lVar3 = local_b0,
                 lVar4 == 0)) || (*(long *)(lVar4 + 0x18) == 0)) || (lVar6 == 0)) break;
            if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_07368c88;
            lVar5 = *(long *)(param_4 + 0x28);
            *(undefined4 *)(lVar6 + lVar8 * 4) = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x10);
            if (((lVar5 == 0) ||
                (lVar4 = FUN_057e0998(lVar5,uVar7 & 0xffffffff,DAT_091ae8f0), lVar4 == 0)) ||
               (local_a8 == 0)) break;
            if (*(uint *)(local_a8 + 0x18) <= uVar7) goto LAB_07368c88;
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_07368c88;
            lVar6 = *(long *)(param_4 + 0x20);
            *(float *)(lVar3 + lVar8 * 4) =
                 *(float *)(lVar4 + 0x14) * *(float *)(local_a8 + lVar8 * 4);
            lVar8 = lVar8 + 1;
            if (lVar6 == 0) break;
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

