// rea decompile_all
// name: UniRx.Triggers.ObservableStateMachineTrigger$$OnStateEnter
// address: 0x417f3f4
// body: available
// range: 0x417f3f4-0x417f4d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x417f4bc to 0x61e987c FUN_061e987c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Triggers_ObservableStateMachineTrigger__OnStateEnter
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_095166ae & 1) == 0) {
    FUN_03f5c2a4(&DAT_09192f30);
    FUN_03f5c2a4(&DAT_091bbf30);
    DAT_095166ae = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    uVar8 = param_3[3];
    uVar7 = param_3[2];
    uVar1 = *(undefined4 *)(param_3 + 4);
    lVar3 = thunk_FUN_03f9944c(DAT_09192f30);
    System_Object___ctor(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10),param_2);
    uVar2 = DAT_091bbf30;
    *(undefined8 *)(lVar3 + 0x20) = uVar6;
    *(undefined8 *)(lVar3 + 0x18) = uVar5;
    *(undefined8 *)(lVar3 + 0x30) = uVar8;
    *(undefined8 *)(lVar3 + 0x28) = uVar7;
    *(undefined4 *)(lVar3 + 0x38) = uVar1;
    *(undefined4 *)(lVar3 + 0x3c) = param_4;
    FUN_061e987c(lVar4,lVar3,uVar2);
    return;
  }
  return;
}

