// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$RefreshBag
// address: 0x4473ec4
// body: available
// range: 0x4473ec4-0x4473f5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__RefreshBag(long param_1)

{
  ulong uVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (-1 < *(int *)(param_1 + 0x16c)) {
    CookingGraph_CookingLevelSimulation__get_BagAddress(&local_28);
    uStack_38 = uStack_20;
    local_40 = local_28;
    local_30 = local_18;
    uVar1 = CookingGraph_CookingLevelSimulation__Occupied(param_1,&local_40);
    if ((uVar1 & 1) == 0) {
      CookingGraph_CookingLevelSimulation__get_BagAddress(&local_28,param_1);
      uStack_58 = uStack_20;
      local_60 = local_28;
      local_50 = local_18;
      uVar1 = CookingGraph_CookingLevelSimulation__Outgoing(param_1,&local_60);
      if ((uVar1 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x16c) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x144) = 0;
        *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
        *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
      }
    }
  }
  return;
}

