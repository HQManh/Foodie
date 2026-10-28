// rea decompile_all
// name: System.Collections.Hashtable$$GetObjectData
// address: 0x755f3dc
// body: available
// range: 0x755f3dc-0x755f87f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x755f828 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755f830 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755f834 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755f87c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0755f82c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Collections_Hashtable__GetObjectData(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  char local_4c [4];
  undefined8 local_48;
  
  if ((DAT_095219ac & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182820);
    FUN_03f5c2a4(&DAT_09171b58);
    FUN_03f5c2a4(&DAT_09171bd8);
    FUN_03f5c2a4(&DAT_09171c38);
    FUN_03f5c2a4(&DAT_09170c10);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09206690);
    FUN_03f5c2a4(&DAT_09203dd8);
    FUN_03f5c2a4(&DAT_09212dd8);
    FUN_03f5c2a4(&DAT_09206640);
    FUN_03f5c2a4(&DAT_09206fc0);
    FUN_03f5c2a4(&DAT_09203db8);
    FUN_03f5c2a4(&DAT_091fed48);
    FUN_03f5c2a4(&DAT_09212e80);
    DAT_095219ac = 1;
  }
  local_48 = 0;
  local_4c[0] = '\0';
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_0921d490);
    System_ArgumentNullException___ctor(uVar2,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091ce708);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar3);
  }
  local_48 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
  local_4c[0] = '\0';
  System_Threading_Monitor__Enter(local_48,local_4c,0);
  lVar1 = param_1[5];
  thunk_FUN_03f6a5cc();
  System_Runtime_Serialization_SerializationInfo__AddValue
            (*(undefined4 *)((long)param_1 + 0x24),param_2,DAT_09206fc0,0);
  lVar6 = param_1[5];
  thunk_FUN_03f6a5cc();
  System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_09212e80,(int)lVar6,0);
  uVar3 = DAT_09171bd8;
  uVar2 = DAT_09171b58;
  plVar5 = (long *)param_1[8];
  if (plVar5 == (long *)0x0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_091fed48,0,uVar2,0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171c38,0);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_09203db8,0,uVar2,0);
  }
  else if (*plVar5 == DAT_09182820) {
    lVar6 = plVar5[3];
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_091fed48,lVar6,uVar2,0);
    lVar6 = plVar5[2];
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171c38,0);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_09203db8,lVar6,uVar2,0);
  }
  else {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar3,0);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_09206640,plVar5,uVar2,0);
  }
  if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  System_Runtime_Serialization_SerializationInfo__AddValue
            (param_2,DAT_09203dd8,*(undefined4 *)(param_1[2] + 0x18),0);
  uVar3 = FUN_03f5c394(DAT_09180318,(int)param_1[3]);
  uVar4 = FUN_03f5c394(DAT_09180318,(int)param_1[3]);
  System_Collections_Hashtable__CopyKeys(param_1,uVar3,0);
  System_Collections_Hashtable__CopyValues(param_1,uVar4,0);
  uVar2 = DAT_09170c10;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_09206690,uVar3,uVar2,0);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09170c10,0);
  System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_09212dd8,uVar4,uVar2,0);
  lVar6 = param_1[5];
  thunk_FUN_03f6a5cc();
  if ((int)lVar6 != (int)lVar1) {
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar2 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_091feb80);
    System_InvalidOperationException___ctor(uVar2,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091ce708);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar3);
  }
  if (local_4c[0] != '\0') {
    System_Threading_Monitor__Exit(local_48,0);
  }
  return;
}

