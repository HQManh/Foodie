// rea decompile_all
// name: System.Globalization.CultureNotFoundException$$.ctor
// address: 0x7501110
// body: available
// range: 0x7501110-0x7501303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7501294 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75012e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75012fc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7501300 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_CultureNotFoundException___ctor
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_70 [3];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((DAT_0952167c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170a38);
    FUN_03f5c2a4(&DAT_0917dc80);
    FUN_03f5c2a4(&DAT_09205c08);
    FUN_03f5c2a4(&DAT_09205c10);
    DAT_0952167c = 1;
  }
  System_ArgumentException___ctor(param_1,param_2,param_3,param_4,0);
  uVar3 = DAT_09170a38;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
  if (param_2 == 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    plVar4 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                               (param_2,DAT_09205c08,uVar3,0);
    if ((plVar4 == (long *)0x0) || (*plVar4 == *(long *)(DAT_0917dc80 + 0x40))) {
      thunk_FUN_03f9959c(plVar4,DAT_0917dc80,local_70);
      lVar1 = DAT_09535468 + 0x20;
      *(undefined8 *)(param_1 + 0xa0) = local_70[0];
      uVar3 = System_Type__GetTypeFromHandle(lVar1,0);
      plVar4 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                                 (param_2,DAT_09205c10,uVar3,0);
      lVar1 = DAT_09535468;
      if (plVar4 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0x98) = 0;
      }
      else if ((*plVar4 != DAT_09535468) || (*(long **)(param_1 + 0x98) = plVar4, *plVar4 != lVar1))
      {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar4);
        }
        goto LAB_07501300;
      }
      thunk_FUN_03f5d7b8(param_1 + 0x98,plVar4);
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
    }
    else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar4,*(long *)(DAT_0917dc80 + 0x40));
    }
  }
LAB_07501300:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

