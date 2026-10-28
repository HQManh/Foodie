// rea decompile_all
// name: Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions$$AppendHyperLink
// address: 0x7dcaf08
// body: available
// range: 0x7dcaf08-0x7dcb267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7dcb244 to 0x74308f4 System.String$$Concat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7dcb260 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dcb264 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_Internal_DiagnosticsExtensions__AppendHyperLink
               (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_0952619f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184558);
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_091892e0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091fa240);
    FUN_03f5c2a4(&DAT_091f6e68);
    FUN_03f5c2a4(&DAT_091f9f58);
    FUN_03f5c2a4(&DAT_091f6da0);
    FUN_03f5c2a4(&DAT_091fa5b0);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_091fc0a8);
    DAT_0952619f = 1;
  }
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_09184558);
  System_IO_FileInfo___ctor(plVar1,param_1,0);
  if (plVar1 != (long *)0x0) {
    lVar2 = System_IO_FileInfo__get_Directory(plVar1,0);
    lVar4 = *plVar1;
    if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x07dcb25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x1c8))(plVar1,*(undefined8 *)(lVar4 + 0x1d0));
      return;
    }
    lVar2 = (**(code **)(lVar4 + 0x1b8))(plVar1,*(undefined8 *)(lVar4 + 0x1c0));
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188f20);
    }
    if (lVar2 != 0) {
      lVar2 = System_String__Replace
                        (lVar2,*(undefined2 *)(*(long *)(DAT_09188f20 + 0xb8) + 10),0x2f,0);
      if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091892e0);
      }
      if (DAT_095261c9 == '\0') {
        FUN_03f5c2a4(&DAT_091892e0);
        DAT_095261c9 = '\x01';
      }
      if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar2 != 0) {
        uVar3 = System_String__Replace
                          (lVar2,*(undefined8 *)(*(long *)(DAT_091892e0 + 0xb8) + 0x18),DAT_091f5700
                           ,0);
        uVar3 = System_String__Concat(DAT_091fc0a8,uVar3,0);
        lVar2 = FUN_03f5c394(DAT_091805f8,9);
        if (lVar2 != 0) {
          if (*(int *)(lVar2 + 0x18) != 0) {
            *(undefined8 *)(lVar2 + 0x20) = DAT_091fa5b0;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x20));
            if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar2 + 0x28) = uVar3;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x28),uVar3);
              if (2 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x30) = DAT_091f6da0;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x30));
                if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
                  *(undefined8 *)(lVar2 + 0x38) = param_2;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x38),param_2);
                  if (4 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x40) = DAT_091f6e68;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x40));
                    if (5 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x48) = uVar3;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x48),uVar3);
                      if (6 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x50) = DAT_091f9f58;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x50));
                        if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) != 0) {
                          *(undefined8 *)(lVar2 + 0x58) = param_2;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x58),param_2);
                          if (8 < *(uint *)(lVar2 + 0x18)) {
                            *(undefined8 *)(lVar2 + 0x60) = DAT_091fa240;
                            thunk_FUN_03f5d7b8();
                            System_String__Concat(lVar2,0);
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
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

