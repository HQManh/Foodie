// rea decompile_all
// name: Cysharp.Threading.Tasks.Internal.RuntimeHelpersAbstraction$$WellKnownNoReferenceContainsTypeInitialize
// address: 0x7dcccb4
// body: available
// range: 0x7dcccb4-0x7dcd187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7dcd17c to 0x75cebec System.Type$$op_Equality (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7dcd180 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dcd184 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Cysharp_Threading_Tasks_Internal_RuntimeHelpersAbstraction__WellKnownNoReferenceContainsTypeInitialize
          (long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  do {
    if ((DAT_095261ad & 1) == 0) {
      FUN_03f5c2a4(&DAT_09171078);
      FUN_03f5c2a4(&DAT_091711f0);
      FUN_03f5c2a4(&DAT_09171468);
      FUN_03f5c2a4(&DAT_09171448);
      FUN_03f5c2a4(&DAT_09171520);
      FUN_03f5c2a4(&DAT_091719c8);
      FUN_03f5c2a4(&DAT_091725c0);
      FUN_03f5c2a4(&DAT_09172890);
      FUN_03f5c2a4(&DAT_09172980);
      FUN_03f5c2a4(&DAT_091734e0);
      FUN_03f5c2a4(&DAT_091734c8);
      FUN_03f5c2a4(&DAT_09173508);
      FUN_03f5c2a4(&DAT_091734f0);
      FUN_03f5c2a4(&DAT_09173518);
      DAT_095261ad = 1;
    }
    if (param_1 == (long *)0x0) {
LAB_07dcd180:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = System_Type__get_IsPrimitive(param_1,0);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    uVar1 = (**(code **)(*param_1 + 0x5d8))(param_1,*(undefined8 *)(*param_1 + 0x5e0));
    uVar2 = DAT_09171448;
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    uVar1 = System_Type__op_Equality(param_1,uVar2,0);
    uVar2 = DAT_09171468;
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    uVar1 = System_Type__op_Equality(param_1,uVar2,0);
    uVar2 = DAT_091719c8;
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    uVar1 = System_Type__op_Equality(param_1,uVar2,0);
    uVar2 = DAT_09171520;
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    uVar1 = System_Type__op_Equality(param_1,uVar2,0);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    uVar1 = (**(code **)(*param_1 + 0x3d8))(param_1,*(undefined8 *)(*param_1 + 0x3e0));
    if ((uVar1 & 1) == 0) {
LAB_07dccf38:
      uVar2 = DAT_091734c8;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
      uVar1 = System_Type__op_Equality(param_1,uVar2,0);
      uVar2 = DAT_091734f0;
      if ((uVar1 & 1) == 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
        uVar1 = System_Type__op_Equality(param_1,uVar2,0);
        uVar2 = DAT_09173518;
        if ((uVar1 & 1) == 0) {
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
          uVar1 = System_Type__op_Equality(param_1,uVar2,0);
          uVar2 = DAT_091711f0;
          if ((uVar1 & 1) == 0) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
            uVar1 = System_Type__op_Equality(param_1,uVar2,0);
            uVar2 = DAT_09172980;
            if ((uVar1 & 1) == 0) {
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
              uVar1 = System_Type__op_Equality(param_1,uVar2,0);
              uVar2 = DAT_09171078;
              if ((uVar1 & 1) == 0) {
                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
                uVar1 = System_Type__op_Equality(param_1,uVar2,0);
                uVar2 = DAT_09172890;
                if ((uVar1 & 1) == 0) {
                  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
                  uVar1 = System_Type__op_Equality(param_1,uVar2,0);
                  uVar2 = DAT_091734e0;
                  if ((uVar1 & 1) == 0) {
                    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
                    uVar1 = System_Type__op_Equality(param_1,uVar2,0);
                    uVar2 = DAT_09173508;
                    if ((uVar1 & 1) == 0) {
                      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
                      uVar2 = System_Type__op_Equality(param_1,uVar2,0);
                      return uVar2;
                    }
                  }
                }
              }
            }
          }
        }
      }
      return 1;
    }
    uVar3 = (**(code **)(*param_1 + 0x468))(param_1,*(undefined8 *)(*param_1 + 0x470));
    uVar2 = DAT_091725c0;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    uVar1 = System_Type__op_Equality(uVar3,uVar2,0);
    if ((uVar1 & 1) == 0) goto LAB_07dccf38;
    lVar4 = (**(code **)(*param_1 + 0x488))(param_1,*(undefined8 *)(*param_1 + 0x490));
    if (lVar4 == 0) goto LAB_07dcd180;
    if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    param_1 = *(long **)(lVar4 + 0x20);
  } while( true );
}

