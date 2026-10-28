// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder$$FindGroup
// address: 0x4255534
// body: available
// range: 0x4255534-0x4255773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425576c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4255770 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_AudioManagerCakeOrder__FindGroup(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  
  if ((DAT_09516f11 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09213b20);
    FUN_03f5c2a4(&DAT_091f7b58);
    FUN_03f5c2a4(&DAT_091f7c30);
    DAT_09516f11 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = UnityEngine_Audio_AudioMixer__FindMatchingGroups(*(long *)(param_1 + 0x20),param_2,0);
    if ((lVar1 == 0) || (uVar4 = *(ulong *)(lVar1 + 0x18), uVar4 == 0)) {
      return 0;
    }
    if (0 < (int)uVar4) {
      uVar6 = 0;
      plVar7 = (long *)(lVar1 + 0x20);
      do {
        if ((uint)uVar4 <= uVar6) goto LAB_0425576c;
        if ((*plVar7 == 0) || (lVar2 = UnityEngine_Object__GetName(*plVar7,0), lVar2 == 0))
        goto LAB_04255770;
        uVar3 = System_String__Trim(lVar2,0);
        uVar4 = System_String__Equals(uVar3,param_2,4,0);
        if ((uVar4 & 1) != 0) {
          if (*(uint *)(lVar1 + 0x18) <= uVar6) goto LAB_0425576c;
          goto LAB_04255744;
        }
        uVar4 = (ulong)*(uint *)(lVar1 + 0x18);
        uVar6 = uVar6 + 1;
        plVar7 = plVar7 + 1;
      } while ((int)uVar6 < (int)*(uint *)(lVar1 + 0x18));
    }
    lVar2 = FUN_03f5c394(DAT_091805f8,5);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(undefined8 *)(lVar2 + 0x20) = DAT_09213b20;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x20));
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar2 + 0x28) = param_2;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x28),param_2);
          if (2 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x30) = DAT_091f7c30;
            thunk_FUN_03f5d7b8();
            if (*(int *)(lVar1 + 0x18) != 0) {
              plVar7 = (long *)(lVar1 + 0x20);
              if (*plVar7 == 0) goto LAB_04255770;
              uVar3 = UnityEngine_Object__GetName(*plVar7,0);
              if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar2 + 0x38) = uVar3;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x38),uVar3);
                if (4 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x40) = DAT_091f7b58;
                  thunk_FUN_03f5d7b8();
                  uVar3 = System_String__Concat(lVar2,0);
                  uVar5 = *(undefined8 *)(param_1 + 0x20);
                  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_091835d0);
                  }
                  UnityEngine_Debug__LogWarning(uVar3,uVar5,0);
                  if (*(int *)(lVar1 + 0x18) != 0) {
LAB_04255744:
                    return *plVar7;
                  }
                }
              }
            }
          }
        }
      }
LAB_0425576c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_04255770:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

