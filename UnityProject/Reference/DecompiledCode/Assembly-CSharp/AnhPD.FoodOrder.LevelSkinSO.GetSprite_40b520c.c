// rea decompile_all
// name: AnhPD.FoodOrder.LevelSkinSO$$GetSprite
// address: 0x40b520c
// body: available
// range: 0x40b520c-0x40b52df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_LevelSkinSO__GetSprite(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((DAT_09515f0a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515f0a = 1;
  }
  if (((param_3 != 0) && (lVar2 = *(long *)(param_1 + 0x18), lVar2 != 0)) &&
     (0 < (int)*(ulong *)(lVar2 + 0x18))) {
    uVar1 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
    plVar3 = (long *)(lVar2 + 0x20);
    do {
      lVar2 = *plVar3;
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == param_2)) {
        if (param_3 == 2) {
          puVar5 = (undefined8 *)(lVar2 + 0x20);
          uVar4 = *puVar5;
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
          if ((uVar1 & 1) != 0) goto LAB_040b52cc;
        }
        puVar5 = (undefined8 *)(lVar2 + 0x18);
LAB_040b52cc:
        return *puVar5;
      }
      uVar1 = uVar1 - 1;
      plVar3 = plVar3 + 1;
    } while (uVar1 != 0);
  }
  return 0;
}

