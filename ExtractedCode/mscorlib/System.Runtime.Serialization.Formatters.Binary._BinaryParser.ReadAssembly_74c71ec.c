// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryParser$$ReadAssembly
// address: 0x74c71ec
// body: available
// range: 0x74c71ec-0x74c746f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c7380 to 0x74c97c0 System.Runtime.Serialization.Formatters.Binary.SizedArray$$set_Item (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c7384 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c746c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadAssembly
               (long param_1,int param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_24;
  
  if ((DAT_095214bb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181bf8);
    FUN_03f5c2a4(&DAT_09181bf0);
    FUN_03f5c2a4(&DAT_09181c18);
    DAT_095214bb = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09181bf0);
  System_Runtime_Serialization_Formatters_Binary_BinaryAssembly___ctor(lVar3,0);
  if (param_2 == 0x14) {
    lVar4 = thunk_FUN_03f9944c(DAT_09181c18);
    System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainAssembly___ctor(lVar4,0);
    if (lVar4 == 0) goto LAB_074c7384;
    System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainAssembly__Read
              (lVar4,param_1,0);
    System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainAssembly__Dump(lVar4,0);
    if (lVar3 == 0) goto LAB_074c7384;
    lVar5 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(lVar4 + 0x10);
    if (lVar5 == 0) goto LAB_074c7384;
    plVar6 = (long *)System_Runtime_Serialization_Formatters_Binary_ObjectReader__CrossAppDomainArray
                               (lVar5,*(undefined4 *)(lVar4 + 0x14),0);
    lVar5 = DAT_09535468;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
    }
    else {
      plVar1 = plVar6;
      if (*plVar6 != DAT_09535468) {
        plVar1 = (long *)0x0;
      }
      *(long **)(lVar3 + 0x18) = plVar1;
      if (*plVar6 != lVar5) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),plVar6);
    if (*(long *)(lVar3 + 0x18) == 0) {
      uVar7 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar7 = FUN_03f5c394(uVar7,2);
      FUN_039b1d98();
      uVar8 = thunk_FUN_03fc39d4(&DAT_0920dc10);
      FUN_039b0da0(uVar7,uVar8);
      uVar8 = thunk_FUN_03fc39d4(&DAT_0920dc10);
      FUN_039af17c(uVar7,0,uVar8);
      FUN_039b1d98(lVar4);
      local_24 = *(undefined4 *)(lVar4 + 0x14);
      uVar8 = FUN_03f5c42c(DAT_09535420,&local_24);
      FUN_039b0da0(uVar7,uVar8);
      FUN_039af17c(uVar7,1,uVar8);
      uVar8 = thunk_FUN_03fc39d4(&DAT_091ff960);
      uVar7 = System_Environment__GetResourceString(uVar8,uVar7,0);
      thunk_FUN_03fc39d4(&DAT_0918a948);
      uVar8 = thunk_FUN_03f9944c();
      System_Runtime_Serialization_SerializationException___ctor(uVar8,uVar7,0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091e0e30);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,uVar7);
    }
  }
  else {
    if (lVar3 == 0) goto LAB_074c7384;
    System_Runtime_Serialization_Formatters_Binary_BinaryAssembly__Read(lVar3,param_1,0);
    System_Runtime_Serialization_Formatters_Binary_BinaryAssembly__Dump(lVar3,0);
  }
  lVar4 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_AssemIdToAssemblyTable
                    (param_1);
  uVar2 = *(undefined4 *)(lVar3 + 0x10);
  uVar8 = *(undefined8 *)(lVar3 + 0x18);
  uVar7 = thunk_FUN_03f9944c(DAT_09181bf8);
  System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo___ctor(uVar7,uVar8,0);
  if (lVar4 != 0) {
    System_Runtime_Serialization_Formatters_Binary_SizedArray__set_Item(lVar4,uVar2,uVar7);
    return;
  }
LAB_074c7384:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

