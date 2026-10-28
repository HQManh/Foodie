// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder$$ApplySfxSpeedToSources
// address: 0x4255250
// body: available
// range: 0x4255250-0x425548b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4255398 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425547c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4255480 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4255484 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4255488 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_AudioManagerCakeOrder__ApplySfxSpeedToSources(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((DAT_09516f10 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4f58);
    FUN_03f5c2a4(&DAT_091a4f60);
    FUN_03f5c2a4(&DAT_091a4f68);
    FUN_03f5c2a4(&DAT_091b20c0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516f10 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x38);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (lVar3 == 0) {
    return;
  }
  uVar5 = 0;
  do {
    if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar5) {
      if (*(long *)(param_1 + 0x138) != 0) {
        FUN_057e185c(&local_88,*(long *)(param_1 + 0x138),DAT_091b20c0);
        local_60 = local_78;
        uStack_68 = puStack_80;
        local_70 = local_88;
        local_88 = 0;
        puStack_80 = &local_70;
        while( true ) {
          uVar5 = FUN_071bd28c(&local_70,DAT_091a4f60);
          lVar3 = local_60;
          if ((uVar5 & 1) == 0) {
            FUN_071bd288(&local_70,DAT_091a4f58);
            return;
          }
          if (local_60 == 0) break;
          if (*(long *)(local_60 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar5 = UnityEngine_AudioSource__get_isPlaying(*(long *)(local_60 + 0x10),0);
          if ((uVar5 & 1) != 0) {
            iVar1 = *(int *)(lVar3 + 0x18);
            fVar7 = 1.0;
            if (iVar1 < 5) {
              if ((iVar1 == 2) || (iVar1 == 4)) {
                fVar7 = *(float *)(param_1 + 0xa0);
              }
            }
            else if (iVar1 == 6) {
              fVar7 = *(float *)(param_1 + 0xa8);
            }
            else if (iVar1 == 5) {
              fVar7 = *(float *)(param_1 + 0xa4);
            }
            if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_AudioSource__SetPitch
                      (fVar7 * *(float *)(lVar3 + 0x1c),*(long *)(lVar3 + 0x10),0);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      break;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar3 = *(long *)(lVar3 + uVar5 * 8 + 0x20);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x18);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        iVar1 = *(int *)(lVar3 + 0x10);
        uVar6 = 0x3f800000;
        if (iVar1 < 5) {
          if ((iVar1 == 2) || (iVar1 == 4)) {
            uVar6 = *(undefined4 *)(param_1 + 0xa0);
          }
        }
        else if (iVar1 == 6) {
          uVar6 = *(undefined4 *)(param_1 + 0xa8);
        }
        else if (iVar1 == 5) {
          uVar6 = *(undefined4 *)(param_1 + 0xa4);
        }
        if (*(long *)(lVar3 + 0x18) == 0) break;
        UnityEngine_AudioSource__SetPitch(uVar6,*(long *)(lVar3 + 0x18),0);
      }
    }
    lVar3 = *(long *)(param_1 + 0x38);
    uVar5 = uVar5 + 1;
  } while (lVar3 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

