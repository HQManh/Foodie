// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall$$Write
// address: 0x74b7e5c
// body: available
// range: 0x74b7e5c-0x74b7f83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b7f78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b7f7c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b7f80 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_BinaryMethodCall__Write
               (long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if ((param_2 != 0) && (plVar1 = *(long **)(param_2 + 0x30), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x1e8))(plVar1,0x15,*(undefined8 *)(*plVar1 + 0x1f0));
    plVar1 = *(long **)(param_2 + 0x30);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x278))
                (plVar1,*(undefined4 *)(param_1 + 0x3c),*(undefined8 *)(*plVar1 + 0x280));
      System_Runtime_Serialization_Formatters_Binary_IOUtil__WriteStringWithCode
                (*(undefined8 *)(param_1 + 0x10),param_2);
      System_Runtime_Serialization_Formatters_Binary_IOUtil__WriteStringWithCode
                (*(undefined8 *)(param_1 + 0x18),param_2);
      uVar2 = *(uint *)(param_1 + 0x3c);
      if ((uVar2 >> 5 & 1) != 0) {
        plVar1 = *(long **)(param_1 + 0x28);
        if ((plVar1 != (long *)0x0) && (*plVar1 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0();
        }
        System_Runtime_Serialization_Formatters_Binary_IOUtil__WriteStringWithCode(plVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0x3c);
      }
      if ((uVar2 >> 1 & 1) == 0) {
        return;
      }
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (plVar1 = *(long **)(param_2 + 0x30), plVar1 != (long *)0x0)) {
        (**(code **)(*plVar1 + 0x278))
                  (plVar1,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18),
                   *(undefined8 *)(*plVar1 + 0x280));
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != 0) {
          lVar6 = 4;
          do {
            uVar4 = lVar6 - 4;
            if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar4) {
              return;
            }
            lVar5 = *(long *)(param_1 + 0x30);
            if (lVar5 == 0) break;
            if ((*(uint *)(lVar5 + 0x18) <= uVar4) || (*(uint *)(lVar3 + 0x18) <= uVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            System_Runtime_Serialization_Formatters_Binary_IOUtil__WriteWithCode
                      (*(undefined8 *)(lVar5 + lVar6 * 8),*(undefined8 *)(lVar3 + lVar6 * 8),param_2
                      );
            lVar3 = *(long *)(param_1 + 0x20);
            lVar6 = lVar6 + 1;
          } while (lVar3 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

