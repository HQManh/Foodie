// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectWriter$$GetNext
// address: 0x74c4d3c
// body: available
// range: 0x74c4d3c-0x74c4eab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c4e1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c4ea8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Runtime_Serialization_Formatters_Binary_ObjectWriter__GetNext
                 (long param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  char local_24 [4];
  
  if ((DAT_095214ad & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918d0d0);
    DAT_095214ad = 1;
  }
  plVar2 = *(long **)(param_1 + 0x10);
  local_24[0] = '\0';
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
    if (iVar1 == 0) {
      *param_2 = 0;
      return (long *)0x0;
    }
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(*plVar2 + 0x250));
      if (plVar2 == (long *)0x0) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = plVar2;
        if (*plVar2 == DAT_0918d0d0) {
          plVar6 = (long *)plVar2[3];
        }
      }
      plVar3 = *(long **)(param_1 + 0x18);
      if (plVar3 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x188))
                          (plVar3,plVar6,local_24,*(undefined8 *)(*plVar3 + 400));
        *param_2 = uVar4;
        if (local_24[0] == '\0') {
          return plVar2;
        }
        uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar4 = FUN_03f5c394(uVar4,1);
        FUN_039b1d98();
        FUN_039b0da0(uVar4,plVar6);
        FUN_039af17c(uVar4,0,plVar6);
        uVar5 = thunk_FUN_03fc39d4(&DAT_09209570);
        uVar4 = System_Environment__GetResourceString(uVar5,uVar4,0);
        thunk_FUN_03fc39d4(&DAT_0918a948);
        uVar5 = thunk_FUN_03f9944c();
        System_Runtime_Serialization_SerializationException___ctor(uVar5,uVar4,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091d50c0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar4);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

