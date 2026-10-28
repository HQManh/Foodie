// rea decompile_all
// name: CakeOrder.InGame.InGameBackgroundsControl$$ChangeTintColorTool
// address: 0x4380540
// body: available
// range: 0x4380540-0x438057f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4380578 to 0x4382144 CakeOrder.InGame.InGameSingleBackground$$InternalChangeTintColor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_InGameBackgroundsControl__ChangeTintColorTool
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  *(float *)(param_5 + 0x88) = param_1;
  *(float *)(param_5 + 0x8c) = param_2;
  lVar1 = *(long *)(param_5 + 0x38);
  *(float *)(param_5 + 0x90) = param_3;
  *(float *)(param_5 + 0x94) = param_4;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_5 + 0x5c);
    *(ulong *)(lVar1 + 0x58) =
         CONCAT44(param_4 * (float)((ulong)*(undefined8 *)(param_5 + 100) >> 0x20),
                  param_3 * (float)*(undefined8 *)(param_5 + 100));
    *(ulong *)(lVar1 + 0x50) =
         CONCAT44(param_2 * (float)((ulong)uVar2 >> 0x20),param_1 * (float)uVar2);
    CakeOrder_InGame_InGameSingleBackground__InternalChangeTintColor
              (0,*(undefined4 *)(lVar1 + 0x78),lVar1,0);
    return;
  }
  return;
}

