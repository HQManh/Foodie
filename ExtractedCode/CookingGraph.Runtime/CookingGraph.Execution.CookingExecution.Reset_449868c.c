// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$Reset
// address: 0x449868c
// body: available
// range: 0x449868c-0x4498873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4498860 to 0x75d9dec System.Array$$Clear (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4498870 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingExecution__Reset(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_095181ae & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c858);
    FUN_03f5c2a4(&DAT_0919c880);
    FUN_03f5c2a4(&DAT_091a8310);
    FUN_03f5c2a4(&DAT_091b23e8);
    FUN_03f5c2a4(&DAT_091b2430);
    FUN_03f5c2a4(&DAT_091abf40);
    FUN_03f5c2a4(&DAT_091b2470);
    DAT_095181ae = 1;
  }
  auVar3 = System_Guid__NewGuid(0);
  *(long *)(param_1 + 0x78) = auVar3._8_8_;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(long *)(param_1 + 0x70) = auVar3._0_8_;
  *(undefined8 *)(param_1 + 0x60) = 1;
  *(undefined8 *)(param_1 + 0x58) = 1;
  if (param_2 != 0) {
    *(long *)(param_1 + 0x88) = param_2;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x88),param_2);
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x38);
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_06e863cc(*(long *)(param_1 + 0x10),DAT_0919c880);
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_06e863cc(*(long *)(param_1 + 0x18),DAT_0919c858);
        if (*(long *)(param_1 + 0x20) != 0) {
          FUN_053e17c4(*(long *)(param_1 + 0x20),DAT_091a8310);
          if (*(long *)(param_1 + 0x28) != 0) {
            FUN_053e17c4(*(long *)(param_1 + 0x28),DAT_091a8310);
            if (*(long *)(param_1 + 0x30) != 0) {
              FUN_053e17c4(*(long *)(param_1 + 0x30),DAT_091a8310);
              lVar2 = *(long *)(param_1 + 0x38);
              if (lVar2 != 0) {
                iVar1 = *(int *)(lVar2 + 0x18);
                *(undefined4 *)(lVar2 + 0x18) = 0;
                *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                if (0 < iVar1) {
                  System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
                }
                lVar2 = *(long *)(param_1 + 0x40);
                if (lVar2 != 0) {
                  iVar1 = *(int *)(lVar2 + 0x18);
                  *(undefined4 *)(lVar2 + 0x18) = 0;
                  *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                  if (0 < iVar1) {
                    System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
                  }
                  lVar2 = *(long *)(param_1 + 0x48);
                  if (lVar2 != 0) {
                    iVar1 = *(int *)(lVar2 + 0x18);
                    *(undefined4 *)(lVar2 + 0x18) = 0;
                    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                    if (0 < iVar1) {
                      System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
                    }
                    lVar2 = *(long *)(param_1 + 0x50);
                    if (lVar2 != 0) {
                      iVar1 = *(int *)(lVar2 + 0x18);
                      *(undefined4 *)(lVar2 + 0x18) = 0;
                      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                      if (0 < iVar1) {
                        System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
                        return;
                      }
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

