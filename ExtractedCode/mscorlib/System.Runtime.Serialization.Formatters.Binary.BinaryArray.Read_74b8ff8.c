// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.BinaryArray$$Read
// address: 0x74b8ff8
// body: available
// range: 0x74b8ff8-0x74b93cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b93c4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74b93c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b93cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_BinaryArray__Read(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  uint local_34;
  
  if ((DAT_09521453 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09187008);
    DAT_09521453 = 1;
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 == 0x11) {
    if (param_2 != 0) {
      uVar3 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadInt32(param_2,0);
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      lVar5 = FUN_03f5c394(DAT_091801b8,1);
      plVar7 = (long *)(param_1 + 0x18);
      *plVar7 = lVar5;
      thunk_FUN_03f5d7b8(plVar7,lVar5);
      lVar5 = *plVar7;
      uVar3 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadInt32(param_2,0);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) == 0) goto LAB_074b93cc;
        *(undefined4 *)(lVar5 + 0x20) = uVar3;
        uVar6 = DAT_091801b8;
        *(undefined4 *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x14) = 1;
        uVar6 = FUN_03f5c394(uVar6,1);
        *(undefined8 *)(param_1 + 0x20) = uVar6;
        thunk_FUN_03f5d7b8();
        *(undefined8 *)(param_1 + 0x30) = 0;
        uVar6 = 0;
        *(undefined4 *)(param_1 + 0x28) = 1;
        goto LAB_074b93b4;
      }
    }
  }
  else if (iVar2 == 0x10) {
    if (param_2 != 0) {
      uVar3 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadInt32(param_2,0);
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      lVar5 = FUN_03f5c394(DAT_091801b8,1);
      plVar7 = (long *)(param_1 + 0x18);
      *plVar7 = lVar5;
      thunk_FUN_03f5d7b8(plVar7,lVar5);
      lVar5 = *plVar7;
      uVar3 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadInt32(param_2,0);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) == 0) goto LAB_074b93cc;
        *(undefined4 *)(lVar5 + 0x20) = uVar3;
        uVar6 = DAT_091801b8;
        *(undefined4 *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x14) = 1;
        uVar6 = FUN_03f5c394(uVar6,1);
        *(undefined8 *)(param_1 + 0x20) = uVar6;
        thunk_FUN_03f5d7b8();
        *(undefined8 *)(param_1 + 0x30) = 0;
        uVar6 = 0;
        *(undefined4 *)(param_1 + 0x28) = 2;
        goto LAB_074b93b4;
      }
    }
  }
  else if (iVar2 == 0xf) {
    if (param_2 != 0) {
      uVar3 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadInt32(param_2,0);
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      lVar5 = FUN_03f5c394(DAT_091801b8,1);
      plVar7 = (long *)(param_1 + 0x18);
      *plVar7 = lVar5;
      thunk_FUN_03f5d7b8(plVar7,lVar5);
      lVar5 = *plVar7;
      uVar3 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadInt32(param_2,0);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) != 0) {
          *(undefined4 *)(lVar5 + 0x20) = uVar3;
          uVar6 = DAT_091801b8;
          *(undefined4 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x14) = 1;
          uVar6 = FUN_03f5c394(uVar6,1);
          *(undefined8 *)(param_1 + 0x20) = uVar6;
          thunk_FUN_03f5d7b8();
          *(undefined4 *)(param_1 + 0x28) = 0;
          local_34 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadByte
                               (param_2,0);
          local_34 = local_34 & 0xff;
          uVar6 = FUN_03f5c42c(DAT_09187008,&local_34);
          *(undefined8 *)(param_1 + 0x30) = uVar6;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar6);
          return;
        }
LAB_074b93cc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
  else if (param_2 != 0) {
    uVar3 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadInt32(param_2,0);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    uVar4 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadByte(param_2,0);
    *(uint *)(param_1 + 0x40) = uVar4 & 0xff;
    uVar3 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadInt32(param_2,0);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    lVar5 = FUN_03f5c394(DAT_091801b8);
    plVar8 = (long *)(param_1 + 0x18);
    *plVar8 = lVar5;
    thunk_FUN_03f5d7b8(plVar8,lVar5);
    lVar5 = FUN_03f5c394(DAT_091801b8,*(undefined4 *)(param_1 + 0x14));
    plVar7 = (long *)(param_1 + 0x20);
    *plVar7 = lVar5;
    thunk_FUN_03f5d7b8(plVar7,lVar5);
    if (0 < *(int *)(param_1 + 0x14)) {
      uVar9 = 0;
      do {
        lVar5 = *plVar8;
        uVar3 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadInt32(param_2,0);
        if (lVar5 == 0) goto LAB_074b93c8;
        if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_074b93cc;
        lVar1 = uVar9 * 4;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(lVar5 + lVar1 + 0x20) = uVar3;
      } while ((long)uVar9 < (long)*(int *)(param_1 + 0x14));
      if ((0xfffffffc < *(int *)(param_1 + 0x40) - 6U) && (0 < *(int *)(param_1 + 0x14))) {
        uVar9 = 0;
        do {
          lVar5 = *plVar7;
          uVar3 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadInt32
                            (param_2,0);
          if (lVar5 == 0) goto LAB_074b93c8;
          if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_074b93cc;
          lVar1 = uVar9 * 4;
          uVar9 = uVar9 + 1;
          *(undefined4 *)(lVar5 + lVar1 + 0x20) = uVar3;
        } while ((long)uVar9 < (long)*(int *)(param_1 + 0x14));
      }
    }
    uVar4 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadByte(param_2,0);
    *(uint *)(param_1 + 0x28) = uVar4 & 0xff;
    uVar6 = System_Runtime_Serialization_Formatters_Binary_BinaryConverter__ReadTypeInfo
                      (uVar4 & 0xff,param_2,param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
LAB_074b93b4:
    thunk_FUN_03f5d7b8(param_1 + 0x30,uVar6);
    return;
  }
LAB_074b93c8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

