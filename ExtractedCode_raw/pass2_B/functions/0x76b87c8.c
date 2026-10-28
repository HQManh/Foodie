// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
// address: 0x76b87c8
// body: available
// range: 0x76b87c8-0x76b8beb inclusive
// range: 0x76b8d74-0x76b8e5b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b8be8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b8e54 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b8e58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray
                 (undefined8 param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
                 long param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_70;
  undefined8 local_68;
  
  if ((DAT_095226bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185f80);
    FUN_03f5c2a4(&DAT_091aeab0);
    FUN_03f5c2a4(&DAT_0917c7e0);
    FUN_03f5c2a4(&DAT_091bb118);
    FUN_03f5c2a4(&DAT_091bb120);
    FUN_03f5c2a4(&DAT_091bb128);
    FUN_03f5c2a4(&DAT_091bb110);
    FUN_03f5c2a4(&DAT_091bb130);
    FUN_03f5c2a4(&DAT_0917e8a8);
    FUN_03f5c2a4(&DAT_09211cf8);
    DAT_095226bc = 1;
  }
  local_68 = 0;
  local_70 = 0;
  if ((param_4 != 0) && (plVar4 = *(long **)(param_4 + 0x60), plVar4 != (long *)0x0)) {
    iVar1 = (**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
    if (param_6 != 0) {
      Newtonsoft_Json_Serialization_JsonSerializerInternalReader__AddReference
                (param_1,param_3,param_6,param_2);
    }
    Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserializing
              (param_1,param_3,param_4,param_2);
    uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe
                      (param_1,*(undefined8 *)(param_4 + 0xc0));
    plVar4 = (long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter
                               (param_1,uVar5,0,param_4,param_5);
    local_68 = 0;
    lVar6 = thunk_FUN_03f9944c(DAT_0917e8a8);
    FUN_061a1268(lVar6,DAT_091bb110);
    if ((lVar6 != 0) &&
       (FUN_061a19e4(lVar6,param_2,DAT_091bb128), plVar8 = param_2, param_3 != (long *)0x0)) {
      do {
        while ((**(code **)(*param_3 + 0x268))(param_3,*(undefined8 *)(*param_3 + 0x270)),
              *(int *)(lVar6 + 0x18) == iVar1) {
          uVar7 = Newtonsoft_Json_JsonReader__ReadForType(param_3,uVar5,plVar4 != (long *)0x0,0);
          if ((uVar7 & 1) == 0) goto LAB_076b8d74;
          iVar2 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
          if (iVar2 != 5) {
            if (iVar2 == 0xe) {
              FUN_061a18e8(lVar6,DAT_091bb120);
              plVar8 = (long *)FUN_061a18a4(lVar6,DAT_091bb118);
              local_68 = 0;
            }
            else {
              if ((plVar4 == (long *)0x0) ||
                 (uVar7 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0)),
                 (uVar7 & 1) == 0)) {
                uVar10 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal
                                   (param_1,param_3,*(undefined8 *)(param_4 + 0xc0),uVar5,0,param_4,
                                    param_5,0);
              }
              else {
                uVar10 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable
                                   (param_1,plVar4,param_3,*(undefined8 *)(param_4 + 0xc0),0);
              }
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar12 = *plVar8;
              uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar7 != 0) {
                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == DAT_09185f80) {
                    puVar11 = (undefined8 *)(lVar12 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                    goto LAB_076b8b58;
                  }
                  uVar7 = uVar7 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar7 != 0);
              }
              puVar11 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185f80,2);
LAB_076b8b58:
              (*(code *)*puVar11)(plVar8,uVar10,puVar11[1]);
            }
          }
        }
        uVar7 = (**(code **)(*param_3 + 0x288))(param_3,*(undefined8 *)(*param_3 + 0x290));
        if ((uVar7 & 1) == 0) {
LAB_076b8d74:
          Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ThrowUnexpectedEndException
                    (param_1,param_3,param_4,param_2,DAT_09211cf8);
LAB_076b8d94:
          Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserialized
                    (param_1,param_3,param_4,param_2);
          return param_2;
        }
        iVar2 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
        if (iVar2 != 5) {
          if (iVar2 == 0xe) {
            FUN_061a18e8(lVar6,DAT_091bb120);
            if (*(int *)(lVar6 + 0x18) < 1) goto LAB_076b8d94;
            plVar8 = (long *)FUN_061a18a4(lVar6,DAT_091bb118);
          }
          else {
            if (iVar2 != 2) {
              FUN_039b1d98(param_3);
              uVar3 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
              local_90 = thunk_FUN_03fc39d4(&DAT_09187478);
              uStack_88 = 0xffffffffffffffff;
              local_80 = uVar3;
              uVar5 = System_Enum__ToString(&local_90,0);
              uVar10 = thunk_FUN_03fc39d4(&DAT_09211ef0);
              uVar5 = System_String__Concat(uVar10,uVar5,0);
              uVar5 = Newtonsoft_Json_JsonSerializationException__Create(param_3,uVar5,0);
              uVar10 = thunk_FUN_03fc39d4(&DAT_091d1b60);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar5,uVar10);
            }
            plVar9 = (long *)thunk_FUN_03f9944c(DAT_0917c7e0);
            FUN_057e0400(plVar9,DAT_091aeab0);
            if (plVar8 == (long *)0x0) break;
            lVar12 = *plVar8;
            uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar7 != 0) {
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == DAT_09185f80) {
                  puVar11 = (undefined8 *)(lVar12 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                  goto LAB_076b8bb8;
                }
                uVar7 = uVar7 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 != 0);
            }
            puVar11 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185f80,2);
LAB_076b8bb8:
            (*(code *)*puVar11)(plVar8,plVar9,puVar11[1]);
            FUN_061a19e4(lVar6,plVar9,DAT_091bb128);
            plVar8 = plVar9;
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

