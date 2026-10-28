// rea decompile_all
// name: Newtonsoft.Json.Linq.JArray$$Parse
// address: 0x76d4dec
// body: available
// range: 0x76d4dec-0x76d4f4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d4f44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d4f4c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076d4f48) */

undefined8 Newtonsoft_Json_Linq_JArray__Parse(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  
  if ((DAT_0952277a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09187460);
    FUN_03f5c2a4(&DAT_0918b3e8);
    DAT_0952277a = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_0918b3e8);
  System_IO_StringReader___ctor(uVar1,param_1,0);
  plVar2 = (long *)thunk_FUN_03f9944c(DAT_09187460);
  Newtonsoft_Json_JsonTextReader___ctor(plVar2,uVar1,0);
  uVar1 = Newtonsoft_Json_Linq_JArray__Load(plVar2,param_2);
  do {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = (**(code **)(*plVar2 + 0x288))(plVar2,*(undefined8 *)(*plVar2 + 0x290));
  } while ((uVar3 & 1) != 0);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185a58) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076d4f1c;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_076d4f1c:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  return uVar1;
}

