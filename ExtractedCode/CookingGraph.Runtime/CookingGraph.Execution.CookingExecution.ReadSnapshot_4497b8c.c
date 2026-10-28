// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$ReadSnapshot
// address: 0x4497b8c
// body: available
// range: 0x4497b8c-0x4497dd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_Execution_CookingExecution__ReadSnapshot(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_095181aa & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182d70);
    FUN_03f5c2a4(&DAT_091c64c8);
    FUN_03f5c2a4(&DAT_091c6448);
    FUN_03f5c2a4(&DAT_091c6450);
    FUN_03f5c2a4(&DAT_091ca7e8);
    FUN_03f5c2a4(&DAT_091ca198);
    FUN_03f5c2a4(&DAT_091ca1a0);
    FUN_03f5c2a4(&DAT_091cad58);
    FUN_03f5c2a4(&DAT_091cad88);
    FUN_03f5c2a4(&DAT_091cadb8);
    FUN_03f5c2a4(&DAT_09179328);
    FUN_03f5c2a4(&DAT_09178068);
    FUN_03f5c2a4(&DAT_09178070);
    DAT_095181aa = 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = thunk_FUN_03f9944c(DAT_09178070);
  FUN_053059f8(uVar3,param_1,DAT_091c6448,0);
  uVar3 = FUN_04aeba7c(uVar4,uVar3,DAT_091ca1a0);
  uVar3 = FUN_04b049e4(uVar3,DAT_091cad88);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = thunk_FUN_03f9944c(DAT_09179328);
  FUN_05324070(uVar4,param_1,DAT_091c64c8,0);
  uVar4 = FUN_04af8044(uVar5,uVar4,DAT_091ca7e8);
  uVar4 = FUN_04b049e4(uVar4,DAT_091cadb8);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = thunk_FUN_03f9944c(DAT_09178068);
  FUN_053059f8(uVar5,param_1,DAT_091c6450,0);
  uVar5 = FUN_04aeba7c(uVar6,uVar5,DAT_091ca198);
  uVar5 = FUN_04b049e4(uVar5,DAT_091cad58);
  uVar6 = thunk_FUN_03f9944c(DAT_09182d70);
  CookingGraph_Execution_CookingExecutionSnapshot___ctor(uVar7,uVar6,uVar1,uVar2,uVar3,uVar4,uVar5);
  return uVar6;
}

