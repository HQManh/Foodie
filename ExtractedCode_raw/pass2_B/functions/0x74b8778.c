// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped$$Write
// address: 0x74b8778
// body: available
// range: 0x74b8778-0x74b894f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b8948 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b894c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_BinaryObjectWithMapTyped__Write
               (long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if ((param_2 != 0) && (plVar1 = *(long **)(param_2 + 0x30), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x1e8))
              (plVar1,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)(*plVar1 + 0x1f0));
    plVar1 = *(long **)(param_2 + 0x30);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x278))
                (plVar1,*(undefined4 *)(param_1 + 0x14),*(undefined8 *)(*plVar1 + 0x280));
      plVar1 = *(long **)(param_2 + 0x30);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x2c8))
                  (plVar1,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*plVar1 + 0x2d0));
        plVar1 = *(long **)(param_2 + 0x30);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x278))
                    (plVar1,*(undefined4 *)(param_1 + 0x20),*(undefined8 *)(*plVar1 + 0x280));
          if (0 < *(int *)(param_1 + 0x20)) {
            uVar5 = 0;
            do {
              lVar2 = *(long *)(param_1 + 0x28);
              if (lVar2 == 0) goto LAB_074b8948;
              if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_074b894c;
              plVar1 = *(long **)(param_2 + 0x30);
              if (plVar1 == (long *)0x0) goto LAB_074b8948;
              (**(code **)(*plVar1 + 0x2c8))
                        (plVar1,*(undefined8 *)(lVar2 + uVar5 * 8 + 0x20),
                         *(undefined8 *)(*plVar1 + 0x2d0));
              uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)*(int *)(param_1 + 0x20));
            if (0 < *(int *)(param_1 + 0x20)) {
              uVar5 = 0;
              do {
                lVar2 = *(long *)(param_1 + 0x30);
                if (lVar2 == 0) goto LAB_074b8948;
                if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_074b894c;
                plVar1 = *(long **)(param_2 + 0x30);
                if (plVar1 == (long *)0x0) goto LAB_074b8948;
                (**(code **)(*plVar1 + 0x1e8))
                          (plVar1,*(undefined4 *)(lVar2 + uVar5 * 4 + 0x20),
                           *(undefined8 *)(*plVar1 + 0x1f0));
                uVar5 = uVar5 + 1;
              } while ((long)uVar5 < (long)*(int *)(param_1 + 0x20));
              if (0 < *(int *)(param_1 + 0x20)) {
                uVar5 = 0;
                do {
                  lVar2 = *(long *)(param_1 + 0x30);
                  if (lVar2 == 0) goto LAB_074b8948;
                  if (*(uint *)(lVar2 + 0x18) <= uVar5) {
LAB_074b894c:
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  lVar3 = *(long *)(param_1 + 0x38);
                  if (lVar3 == 0) goto LAB_074b8948;
                  if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_074b894c;
                  lVar4 = *(long *)(param_1 + 0x40);
                  if (lVar4 == 0) goto LAB_074b8948;
                  if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_074b894c;
                  System_Runtime_Serialization_Formatters_Binary_BinaryConverter__WriteTypeInfo
                            (*(undefined4 *)(lVar2 + uVar5 * 4 + 0x20),
                             *(undefined8 *)(lVar3 + uVar5 * 8 + 0x20),
                             *(undefined4 *)(lVar4 + uVar5 * 4 + 0x20),param_2);
                  uVar5 = uVar5 + 1;
                } while ((long)uVar5 < (long)*(int *)(param_1 + 0x20));
              }
            }
          }
          if (*(int *)(param_1 + 0x48) < 1) {
            return;
          }
          plVar1 = *(long **)(param_2 + 0x30);
          if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x074b8938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar1 + 0x278))
                      (plVar1,*(int *)(param_1 + 0x48),*(undefined8 *)(*plVar1 + 0x280));
            return;
          }
        }
      }
    }
  }
LAB_074b8948:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

