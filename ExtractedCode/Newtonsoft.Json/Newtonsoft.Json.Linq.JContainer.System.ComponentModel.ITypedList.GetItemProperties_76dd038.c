// rea decompile_all
// name: Newtonsoft.Json.Linq.JContainer$$System.ComponentModel.ITypedList.GetItemProperties
// address: 0x76dd038
// body: available
// range: 0x76dd038-0x76dd19b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Linq_JContainer__System_ComponentModel_ITypedList_GetItemProperties
               (long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_095227be & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4ef0);
    FUN_03f5c2a4(&DAT_09185960);
    FUN_03f5c2a4(&DAT_09189778);
    DAT_095227be = 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x278))(param_1,*(undefined8 *)(*param_1 + 0x280));
  plVar2 = (long *)thunk_FUN_03f99350(uVar1,DAT_09185960);
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185960) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_076dd0f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185960,9);
LAB_076dd0f8:
    lVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  lVar4 = DAT_091c4ef0;
  lVar5 = *(long *)(DAT_091c4ef0 + 0x38);
  if (lVar5 == 0) {
    FUN_03f95ac8(DAT_091c4ef0);
    lVar5 = *(long *)(lVar4 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  uVar1 = **(undefined8 **)(lVar4 + 0xb8);
  lVar4 = thunk_FUN_03f9944c(DAT_09189778);
  System_ComponentModel_PropertyDescriptorCollection___ctor(lVar4,uVar1,0);
  return lVar4;
}

