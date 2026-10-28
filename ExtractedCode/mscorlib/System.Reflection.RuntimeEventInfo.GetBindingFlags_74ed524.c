// rea decompile_all
// name: System.Reflection.RuntimeEventInfo$$GetBindingFlags
// address: 0x74ed524
// body: available
// range: 0x74ed524-0x74ed673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_RuntimeEventInfo__GetBindingFlags(long *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *local_68;
  long *local_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_095215ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_095215ff = 1;
  }
  uStack_78 = 0;
  local_80 = 0;
  local_68 = (long *)0x0;
  uStack_70 = 0;
  plStack_58 = (long *)0x0;
  local_60 = (long *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_03f67490(param_1,&local_80);
  plVar7 = local_68;
  if (((local_68 == (long *)0x0) && (plVar7 = local_60, local_60 == (long *)0x0)) &&
     (plVar7 = plStack_58, plStack_58 == (long *)0x0)) {
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uVar3 = (**(code **)(*plVar7 + 0x268))(plVar7,*(undefined8 *)(*plVar7 + 0x270));
    bVar1 = false;
    bVar2 = (uVar3 & 7) == 6;
  }
  uVar5 = System_Reflection_RuntimeEventInfo__GetDeclaringTypeInternal(param_1);
  uVar6 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar3 = System_Type__op_Inequality(uVar5,uVar6,0);
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar7 + 0x268))(plVar7,*(undefined8 *)(*plVar7 + 0x270));
    uVar4 = uVar4 >> 4 & 1;
  }
  if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_RuntimeType__FilterPreCalculate(bVar2,uVar3 & 1,uVar4,0);
  return;
}

