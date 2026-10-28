// rea decompile_all
// name: Newtonsoft.Json.Linq.JTokenWriter$$AddJValue
// address: 0x76f3794
// body: available
// range: 0x76f3794-0x76f385b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f3854 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76f3858 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JTokenWriter__AddJValue(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_1 + 0x68);
  if (*plVar5 == 0) {
    if (param_2 == 0) {
      param_2 = Newtonsoft_Json_Linq_JValue__CreateNull();
    }
    plVar3 = (long *)(param_1 + 0x70);
    *plVar3 = param_2;
    thunk_FUN_03f5d7b8(plVar3);
    plVar5 = (long *)(param_1 + 0x78);
    *plVar5 = *plVar3;
LAB_076f384c:
    thunk_FUN_03f5d7b8(plVar5);
    return;
  }
  uVar2 = Newtonsoft_Json_Linq_JContainer__TryAdd(*plVar5,param_2,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar3 = (long *)*plVar5;
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x288))(plVar3,*(undefined8 *)(*plVar3 + 0x290));
    *(undefined8 *)(param_1 + 0x78) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),uVar4);
    plVar3 = *(long **)(param_1 + 0x68);
    if (plVar3 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
      if (iVar1 != 4) {
        return;
      }
      if (*plVar5 != 0) {
        *plVar5 = *(long *)(*plVar5 + 0x10);
        goto LAB_076f384c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

