// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c$$<get_RemainingItems>b__254_0
// address: 0x448b798
// body: available
// range: 0x448b798-0x448b893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x448b890 to 0x4adc4d0 FUN_04adc4d0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation_<>c__<get_RemainingItems>b__254_0
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_09518125 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c98a0);
    FUN_03f5c2a4(&DAT_091793f8);
    FUN_03f5c2a4(&DAT_091e7a30);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518125 = 1;
  }
  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar1 = *(undefined8 **)(DAT_0918f298 + 0xb8);
  lVar3 = puVar1[0x97];
  if (lVar3 == 0) {
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar1 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    }
    uVar4 = *puVar1;
    lVar3 = thunk_FUN_03f9944c(DAT_091793f8);
    FUN_05322d94(lVar3,uVar4,DAT_091e7a30,0);
    lVar2 = *(long *)(DAT_0918f298 + 0xb8);
    *(long *)(lVar2 + 0x4b8) = lVar3;
    thunk_FUN_03f5d7b8(lVar2 + 0x4b8,lVar3);
  }
  FUN_04adc4d0(param_2,lVar3,DAT_091c98a0);
  return;
}

