// rea decompile_all
// name: System.UnitySerializationHolder$$GetUnitySerializationInfo
// address: 0x75fa960
// body: available
// range: 0x75fa960-0x75facbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75fab60 to 0x74b34e8 System.Runtime.Serialization.SerializationInfo$$AddValue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75facb0 to 0x75facc0 System.UnitySerializationHolder$$GetUnitySerializationInfo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75facb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75facbc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_UnitySerializationHolder__GetUnitySerializationInfo(long param_1,long *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_09521f7d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09172448);
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_09170c50);
    FUN_03f5c2a4(&DAT_09173398);
    FUN_03f5c2a4(&DAT_09203450);
    FUN_03f5c2a4(&DAT_09200498);
    FUN_03f5c2a4(&DAT_092004a0);
    FUN_03f5c2a4(&DAT_09212198);
    FUN_03f5c2a4(&DAT_09203448);
    DAT_09521f7d = 1;
  }
  if ((param_2 == (long *)0x0) ||
     (plVar2 = (long *)System_Type__GetRootElementType(param_2,0), plVar2 == (long *)0x0)) {
LAB_075facb4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = (**(code **)(*plVar2 + 0x3b8))(plVar2,*(undefined8 *)(*plVar2 + 0x3c0));
  if ((uVar3 & 1) != 0) {
    plVar2 = (long *)System_UnitySerializationHolder__AddElementTypes(param_1,param_2);
    uVar4 = DAT_09173398;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
    if (param_1 != 0) {
      System_Runtime_Serialization_SerializationInfo__SetType(param_1,uVar4,0);
      System_Runtime_Serialization_SerializationInfo__AddValue(param_1,DAT_09212198,7,0);
      if (plVar2 != (long *)0x0) {
        uVar1 = (**(code **)(*plVar2 + 0x498))(plVar2,*(undefined8 *)(*plVar2 + 0x4a0));
        System_Runtime_Serialization_SerializationInfo__AddValue(param_1,DAT_09203450,uVar1,0);
        uVar4 = (**(code **)(*plVar2 + 0x328))(plVar2,*(undefined8 *)(*plVar2 + 0x330));
        uVar5 = System_Type__GetTypeFromHandle(DAT_09172448,0);
        System_Runtime_Serialization_SerializationInfo__AddValue(param_1,DAT_09200498,uVar4,uVar5,0)
        ;
        uVar4 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
        uVar5 = System_Type__GetTypeFromHandle(DAT_095354b8 + 0x20,0);
        System_Runtime_Serialization_SerializationInfo__AddValue(param_1,DAT_092004a0,uVar4,uVar5,0)
        ;
        return;
      }
    }
    goto LAB_075facb4;
  }
  uVar3 = (**(code **)(*param_2 + 1000))(param_2,*(undefined8 *)(*param_2 + 0x3f0));
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(*param_2 + 0x298))(param_2,*(undefined8 *)(*param_2 + 0x2a0));
    if ((uVar3 & 1) != 0) {
      plVar2 = (long *)System_UnitySerializationHolder__AddElementTypes(param_1,param_2);
      if (plVar2 == (long *)0x0) goto LAB_075facb4;
      uVar5 = (**(code **)(*plVar2 + 0x488))(plVar2,*(undefined8 *)(*plVar2 + 0x490));
      uVar4 = DAT_09170c50;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
      if (param_1 == 0) goto LAB_075facb4;
      System_Runtime_Serialization_SerializationInfo__AddValue(param_1,DAT_09203448,uVar5,uVar4,0);
      param_2 = (long *)(**(code **)(*plVar2 + 0x468))(plVar2,*(undefined8 *)(*plVar2 + 0x470));
      if (param_2 == (long *)0x0) goto LAB_075facb4;
      if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
          DAT_0918a400)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_2);
      }
      uVar4 = 8;
      goto LAB_075fac70;
    }
  }
  uVar4 = 4;
LAB_075fac70:
  uVar5 = (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
  uVar6 = System_RuntimeType__GetRuntimeAssembly(param_2,0);
  System_UnitySerializationHolder__GetUnitySerializationInfo(param_1,uVar4,uVar5,uVar6);
  return;
}

