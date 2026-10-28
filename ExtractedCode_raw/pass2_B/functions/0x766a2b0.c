// rea decompile_all
// name: Newtonsoft.Json.JsonTextWriter$$WriteIndent
// address: 0x766a2b0
// body: available
// range: 0x766a2b0-0x766a3d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x766a3d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextWriter__WriteIndent(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((DAT_09522457 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09522457 = 1;
  }
  iVar1 = Newtonsoft_Json_JsonWriter__get_Top(param_1,0);
  iVar1 = *(int *)(param_1 + 0x7c) * iVar1;
  iVar2 = Newtonsoft_Json_JsonTextWriter__SetIndentChars(param_1);
  plVar5 = *(long **)(param_1 + 0x68);
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09187e80);
  }
  iVar3 = System_Math__Min(iVar1,0xc,0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x248))(plVar5,uVar6,0,iVar3 + iVar2,*(undefined8 *)(*plVar5 + 0x250));
    if (0 < iVar1 + -0xc) {
      do {
        plVar5 = *(long **)(param_1 + 0x68);
        uVar6 = *(undefined8 *)(param_1 + 0xa0);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar1 = iVar1 + -0xc;
        uVar4 = System_Math__Min(iVar1,0xc,0);
        if (plVar5 == (long *)0x0) goto LAB_0766a3d4;
        (**(code **)(*plVar5 + 0x248))(plVar5,uVar6,iVar2,uVar4,*(undefined8 *)(*plVar5 + 0x250));
      } while (0xc < iVar1);
    }
    return;
  }
LAB_0766a3d4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

