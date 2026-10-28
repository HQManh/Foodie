// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter$$Deserialize
// address: 0x74bc3e4
// body: available
// range: 0x74bc3e4-0x74bc617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74bc534 to 0x74bc770 System.Runtime.Serialization.Formatters.Binary.ObjectReader$$Deserialize (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74bc538 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74bc614 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_BinaryFormatter__Deserialize
               (long param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_09521469 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186fe0);
    FUN_03f5c2a4(&DAT_09188b50);
    FUN_03f5c2a4(&DAT_0918db08);
    DAT_09521469 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
    if ((uVar2 & 1) != 0) {
      lVar3 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200));
      if (lVar3 == 0) {
        uVar5 = thunk_FUN_03fc39d4(&DAT_091fc380);
        uVar5 = System_Environment__GetResourceString(uVar5,0);
        thunk_FUN_03fc39d4(&DAT_0918a948);
        uVar7 = thunk_FUN_03f9944c();
        System_Runtime_Serialization_SerializationException___ctor(uVar7,uVar5,0);
        goto LAB_074bc600;
      }
    }
    lVar3 = thunk_FUN_03f9944c(DAT_09186fe0);
    System_Runtime_Serialization_Formatters_Binary_InternalFE___ctor(lVar3,0);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x1c) = 2;
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 0x30);
      *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(param_1 + 0x38);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      lVar4 = thunk_FUN_03f9944c(DAT_09188b50);
      System_Runtime_Serialization_Formatters_Binary_ObjectReader___ctor
                (lVar4,param_2,uVar5,uVar7,uVar6,lVar3,uVar1);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(param_1 + 0x40);
        thunk_FUN_03f5d7b8();
        uVar5 = thunk_FUN_03f9944c(DAT_0918db08);
        System_Runtime_Serialization_Formatters_Binary___BinaryParser___ctor(uVar5,param_2,lVar4,0);
        System_Runtime_Serialization_Formatters_Binary_ObjectReader__Deserialize
                  (lVar4,param_3,uVar5,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = thunk_FUN_03fc39d4(&DAT_09180318);
  uVar5 = FUN_03f5c394(uVar5,1);
  FUN_039b1d98();
  FUN_039b0da0(uVar5,0);
  FUN_039af17c(uVar5,0,0);
  uVar6 = thunk_FUN_03fc39d4(&DAT_0920a410);
  uVar5 = System_Environment__GetResourceString(uVar6,uVar5,0);
  thunk_FUN_03fc39d4(&DAT_09181550);
  uVar7 = thunk_FUN_03f9944c();
  uVar6 = thunk_FUN_03fc39d4(&DAT_09222300);
  System_ArgumentNullException___ctor(uVar7,uVar6,uVar5,0);
LAB_074bc600:
  uVar5 = thunk_FUN_03fc39d4(&DAT_091c39c8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar5);
}

