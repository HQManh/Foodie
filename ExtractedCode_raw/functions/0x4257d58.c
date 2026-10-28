// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder$$StopSFX
// address: 0x4257d58
// body: available
// range: 0x4257d58-0x4257f0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4257e8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4257f00 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4257f04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4257f08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_AudioManagerCakeOrder__StopSFX(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  if ((DAT_09516f25 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4f58);
    FUN_03f5c2a4(&DAT_091a4f60);
    FUN_03f5c2a4(&DAT_091a4f68);
    FUN_03f5c2a4(&DAT_091b20c0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516f25 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (lVar2 == 0) {
    return;
  }
  uVar4 = 0;
  do {
    if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar4) {
      if (*(long *)(param_1 + 0x138) != 0) {
        FUN_057e185c(&local_68,*(long *)(param_1 + 0x138),DAT_091b20c0);
        while( true ) {
          uVar4 = FUN_071bd28c(&local_68,DAT_091a4f60);
          if ((uVar4 & 1) == 0) {
            FUN_071bd288(&local_68,DAT_091a4f58);
            return;
          }
          if (local_58 == 0) break;
          if (*(long *)(local_58 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          UnityEngine_AudioSource__Stop(*(long *)(local_58 + 0x10),0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      break;
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar2 = *(long *)(lVar2 + uVar4 * 8 + 0x20);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x18);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(lVar2 + 0x18) == 0) break;
        UnityEngine_AudioSource__Stop(*(long *)(lVar2 + 0x18),0);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(lVar2 + 0x20) == 0) break;
        UnityEngine_AudioSource__Stop(*(long *)(lVar2 + 0x20),0);
      }
    }
    lVar2 = *(long *)(param_1 + 0x38);
    uVar4 = uVar4 + 1;
  } while (lVar2 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

