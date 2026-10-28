// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryParser$$ReadArray
// address: 0x74c80d8
// body: available
// range: 0x74c80d8-0x74c869f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c81c8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c84f4 to 0x74c1d3c System.Runtime.Serialization.Formatters.Binary.ObjectReader$$Parse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c8504 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c8508 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c8510 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c869c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadArray
               (long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_095214c4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181be0);
    FUN_03f5c2a4(&DAT_09181bf8);
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_09188b48);
    FUN_03f5c2a4(&DAT_0920df48);
    DAT_095214c4 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09181be0);
  System_Runtime_Serialization_Formatters_Binary_BinaryArray___ctor(lVar3,param_2,0);
  if (lVar3 == 0) goto LAB_074c8504;
  System_Runtime_Serialization_Formatters_Binary_BinaryArray__Read(lVar3,param_1,0);
  if (*(int *)(lVar3 + 0x28) == 4) {
    if (*(int *)(lVar3 + 0x38) < 1) {
      uVar9 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar9 = FUN_03f5c394(uVar9,1);
      FUN_039b1d98(lVar3);
      uVar10 = *(undefined8 *)(lVar3 + 0x30);
      FUN_039b1d98(uVar9);
      FUN_039b0da0(uVar9,uVar10);
      FUN_039af17c(uVar9,0,uVar10);
      puVar8 = &DAT_09208970;
      goto LAB_074c8654;
    }
    lVar4 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_AssemIdToAssemblyTable
                      (param_1);
    if (lVar4 == 0) goto LAB_074c8504;
    plVar5 = (long *)System_Runtime_Serialization_Formatters_Binary_SizedArray__get_Item
                               (lVar4,*(undefined4 *)(lVar3 + 0x38));
    if ((plVar5 != (long *)0x0) && (*plVar5 != DAT_09181bf8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar5);
    }
  }
  else {
    plVar5 = (long *)System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_SystemAssemblyInfo
                               (param_1);
  }
  lVar4 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__GetOp(param_1);
  if (lVar4 == 0) goto LAB_074c8504;
  uVar11 = *(undefined4 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(lVar3 + 0x30);
  lVar16 = *(long *)(lVar4 + 0x80);
  *(undefined4 *)(lVar4 + 0x30) = 2;
  *(undefined4 *)(lVar4 + 0x4c) = uVar11;
  thunk_FUN_03f5d7b8();
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_074c8504;
  plVar6 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__PeekPeek();
  if (plVar6 == (long *)0x0) {
LAB_074c8240:
    *(undefined8 *)(lVar4 + 0x28) = DAT_0920df48;
    thunk_FUN_03f5d7b8();
    if (lVar16 == 0) goto LAB_074c8504;
    *(undefined4 *)(lVar4 + 0x38) = 0;
    *(undefined4 *)(lVar16 + 0x10) = 2;
  }
  else {
    if (*plVar6 != DAT_09188b48) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar6);
    }
    if (0 < *(int *)(lVar3 + 0x10)) goto LAB_074c8240;
    if (lVar16 == 0) goto LAB_074c8504;
    lVar7 = plVar6[6];
    *(undefined4 *)(lVar16 + 0x10) = 3;
    *(undefined4 *)(lVar16 + 0x20) = 2;
    *(undefined4 *)(lVar4 + 0x38) = 2;
    if ((int)lVar7 == 2) {
      *(undefined4 *)(lVar16 + 0x1c) = 3;
      *(undefined4 *)(lVar4 + 0x34) = 3;
    }
    else {
      if ((int)lVar7 != 1) {
        uVar9 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar9 = FUN_03f5c394(uVar9,1);
        FUN_039b1d98(plVar6);
        local_34 = (undefined4)plVar6[6];
        uVar10 = thunk_FUN_03fc39d4(&DAT_09186ff0);
        uVar10 = FUN_03f5c42c(uVar10,&local_34);
        uVar10 = System_Enum__ToString(uVar10,0);
        FUN_039b1d98(uVar9);
        FUN_039b0da0(uVar9,uVar10);
        FUN_039af17c(uVar9,0,uVar10);
        puVar8 = &DAT_092052c8;
        goto LAB_074c8654;
      }
      *(long *)(lVar16 + 0x28) = plVar6[5];
      thunk_FUN_03f5d7b8();
      lVar7 = plVar6[5];
      *(undefined4 *)(lVar16 + 0x1c) = 2;
      *(undefined4 *)(lVar4 + 0x34) = 2;
      *(long *)(lVar16 + 0x40) = lVar7;
      thunk_FUN_03f5d7b8();
      *(long *)(lVar16 + 0x48) = plVar6[8];
      thunk_FUN_03f5d7b8();
    }
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_074c8504;
  lVar7 = System_Runtime_Serialization_Formatters_Binary_ObjectReader__GetId
                    (*(long *)(param_1 + 0x10),(long)*(int *)(lVar3 + 0x10),0);
  lVar13 = *(long *)(param_1 + 0x20);
  *(long *)(lVar16 + 0x58) = lVar7;
  if (lVar7 == lVar13) {
    uVar11 = 1;
  }
  else if ((*(long *)(param_1 + 0x28) < 1) || (lVar7 != *(long *)(param_1 + 0x28))) {
    uVar11 = 2;
  }
  else {
    uVar11 = 3;
  }
  uVar1 = *(undefined4 *)(lVar3 + 0x28);
  uVar9 = *(undefined8 *)(lVar3 + 0x30);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(lVar16 + 0x24) = uVar11;
  *(undefined4 *)(lVar16 + 0x14) = 2;
  System_Runtime_Serialization_Formatters_Binary_BinaryConverter__TypeFromInfo
            (uVar1,uVar9,uVar10,plVar5,lVar16 + 0x7c,lVar16 + 0x68,lVar16 + 0x70,lVar16 + 0x78,0);
  uVar11 = *(undefined4 *)(lVar3 + 0x14);
  uVar9 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined4 *)(lVar16 + 0x50) = 0;
  *(undefined4 *)(lVar16 + 0x80) = uVar11;
  *(undefined8 *)(lVar16 + 0x88) = uVar9;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(lVar16 + 0x98) = *(undefined8 *)(lVar3 + 0x20);
  thunk_FUN_03f5d7b8();
  lVar7 = DAT_09182b98;
  if (5 < *(uint *)(lVar3 + 0x40)) {
    uVar9 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar9 = FUN_03f5c394(uVar9,1);
    FUN_039b1d98(lVar3);
    local_38 = *(undefined4 *)(lVar3 + 0x40);
    uVar10 = thunk_FUN_03fc39d4(&DAT_09181be8);
    uVar10 = FUN_03f5c42c(uVar10,&local_38);
    uVar10 = System_Enum__ToString(uVar10,0);
    FUN_039b1d98(uVar9);
    FUN_039b0da0(uVar9,uVar10);
    FUN_039af17c(uVar9,0,uVar10);
    puVar8 = &DAT_09205590;
LAB_074c8654:
    uVar10 = thunk_FUN_03fc39d4(puVar8);
    uVar9 = System_Environment__GetResourceString(uVar10,uVar9,0);
    thunk_FUN_03fc39d4(&DAT_0918a948);
    uVar10 = thunk_FUN_03f9944c();
    System_Runtime_Serialization_SerializationException___ctor(uVar10,uVar9,0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_091e0e28);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar10,uVar9);
  }
  uVar2 = 1 << (ulong)(*(uint *)(lVar3 + 0x40) & 0x1f);
  if ((uVar2 & 9) == 0) {
    if ((uVar2 & 0x12) == 0) {
      uVar2 = *(uint *)(lVar3 + 0x14);
      uVar14 = (ulong)uVar2;
      if ((int)uVar2 < 1) {
        uVar11 = 3;
        iVar12 = 1;
      }
      else {
        lVar3 = *(long *)(lVar3 + 0x18);
        if (lVar3 == 0) goto LAB_074c8504;
        iVar12 = 1;
        piVar15 = (int *)(lVar3 + 0x20);
        do {
          if (*(uint *)(lVar3 + 0x18) <= uVar2 - 1) goto LAB_074c8508;
          uVar14 = uVar14 - 1;
          iVar12 = *piVar15 * iVar12;
          piVar15 = piVar15 + 1;
        } while (uVar14 != 0);
        uVar11 = 3;
      }
    }
    else {
      lVar3 = *(long *)(lVar3 + 0x18);
      if (lVar3 == 0) goto LAB_074c8504;
      if (*(int *)(lVar3 + 0x18) == 0) goto LAB_074c8508;
      iVar12 = *(int *)(lVar3 + 0x20);
      uVar11 = 2;
    }
    *(int *)(lVar4 + 0x48) = iVar12;
    *(undefined4 *)(lVar16 + 0x18) = uVar11;
  }
  else {
    lVar13 = *(long *)(lVar3 + 0x18);
    if (lVar13 == 0) goto LAB_074c8504;
    if (*(int *)(lVar13 + 0x18) == 0) {
LAB_074c8508:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar11 = *(undefined4 *)(lVar16 + 0x7c);
    *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(lVar16 + 0x18) = 1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar14 = System_Runtime_Serialization_Formatters_Binary_Converter__IsWriteAsByteArray(uVar11,0);
    if ((uVar14 & 1) != 0) {
      lVar3 = *(long *)(lVar3 + 0x20);
      if (lVar3 == 0) goto LAB_074c8504;
      if (*(int *)(lVar3 + 0x18) == 0) goto LAB_074c8508;
      if (*(int *)(lVar3 + 0x20) == 0) {
        System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadArrayAsBytes
                  (param_1,lVar16);
        System_Runtime_Serialization_Formatters_Binary___BinaryParser__PutOp(param_1,lVar4);
        if (*(long *)(param_1 + 0x10) != 0) {
          System_Runtime_Serialization_Formatters_Binary_ObjectReader__Parse
                    (*(long *)(param_1 + 0x10),lVar16,0);
          lVar3 = *(long *)(param_1 + 0x10);
          *(undefined4 *)(lVar16 + 0x10) = 4;
          if (lVar3 == 0) goto LAB_074c8504;
          goto LAB_074c84d8;
        }
        goto LAB_074c8504;
      }
    }
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    System_Runtime_Serialization_Formatters_Binary_SerStack__Push(*(long *)(param_1 + 0x40),lVar4);
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != 0) {
LAB_074c84d8:
      System_Runtime_Serialization_Formatters_Binary_ObjectReader__Parse(lVar3,lVar16,0);
      return;
    }
  }
LAB_074c8504:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

