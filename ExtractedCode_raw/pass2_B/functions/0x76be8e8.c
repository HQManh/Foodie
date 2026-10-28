// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeObject
// address: 0x76be8e8
// body: available
// range: 0x76be8e8-0x76beb37 inclusive
// range: 0x76bebf4-0x76bef73 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76beb34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bee74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bef64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bef68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bef70 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076beef8) */
/* WARNING: Removing unreachable block (ram,0x076bef6c) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeObject
               (long param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 local_7c [4];
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_095226db & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b4d0);
    FUN_03f5c2a4(&DAT_0919b4d8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a2a0);
    FUN_03f5c2a4(&DAT_0917a900);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091a9680);
    FUN_03f5c2a4(&DAT_091a9688);
    FUN_03f5c2a4(&DAT_091aeac8);
    FUN_03f5c2a4(&DAT_091aeaf8);
    FUN_03f5c2a4(&DAT_091aeb08);
    DAT_095226db = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_78 = (long *)0x0;
  local_7c[0] = 0;
  Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerializing
            (param_1,param_2,param_4,param_3);
  lVar4 = DAT_091aeac8;
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    lVar10 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *puVar11 = param_3;
        thunk_FUN_03f5d7b8(puVar11,param_3);
      }
      else {
        FUN_057e0c68(lVar3,param_3,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                    );
      }
      Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (((param_2 != (long *)0x0) &&
          (Newtonsoft_Json_JsonWriter__get_Top(param_2,0), param_4 != 0)) &&
         (lVar4 = *(long *)(param_4 + 0xd8), lVar4 != 0)) {
        iVar13 = 0;
        do {
          iVar2 = FUN_06c773c8(lVar4,DAT_0919b4d0);
          if (iVar2 <= iVar13) {
            lVar4 = *(long *)(param_4 + 0xe8);
            if ((lVar4 == 0) ||
               (plVar6 = (long *)(**(code **)(lVar4 + 0x18))
                                           (*(undefined8 *)(lVar4 + 0x40),param_3,
                                            *(undefined8 *)(lVar4 + 0x28)), plVar6 == (long *)0x0))
            goto LAB_076beefc;
            lVar4 = *plVar6;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 == 0) goto LAB_076bec50;
            piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            goto LAB_076bec38;
          }
          if (*(long *)(param_4 + 0xd8) == 0) break;
          lVar4 = FUN_06c7745c(*(long *)(param_4 + 0xd8),iVar13,DAT_0919b4d8);
          uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CalculatePropertyValues
                            (param_1,param_2,param_3,param_4,param_5,lVar4,&uStack_68,&local_70);
          if ((uVar5 & 1) != 0) {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            Newtonsoft_Json_Serialization_JsonProperty__WritePropertyName(lVar4,param_2,0);
            Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue
                      (param_1,param_2,local_70,uStack_68,lVar4,param_4,param_5);
          }
          lVar4 = *(long *)(param_4 + 0xd8);
          iVar13 = iVar13 + 1;
        } while (lVar4 != 0);
      }
    }
  }
  goto LAB_076bef64;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar12 = piVar12 + 4;
    if (uVar5 == 0) break;
LAB_076bec38:
    if (*(long *)(piVar12 + -2) == DAT_0917a2a0) {
      puVar11 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_076bec6c;
    }
  }
LAB_076bec50:
  puVar11 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a2a0,0);
LAB_076bec6c:
  plVar6 = (long *)(*(code *)*puVar11)(plVar6,puVar11[1]);
  do {
    local_78 = plVar6;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_09185b10) {
          puVar11 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076bece8;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_076bece8:
    uVar5 = (*(code *)*puVar11)(plVar6,puVar11[1]);
    plVar6 = local_78;
    if ((uVar5 & 1) == 0) {
      if (local_78 == (long *)0x0) goto LAB_076beefc;
      lVar4 = *local_78;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_076beec4;
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *local_78;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_0917a900) {
          puVar11 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076bed4c;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(local_78,DAT_0917a900,0);
LAB_076bed4c:
    auVar14 = (*(code *)*puVar11)(plVar6,puVar11[1]);
    lVar4 = auVar14._8_8_;
    uVar7 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract
                      (param_1,auVar14._0_8_);
    if (lVar4 == 0) {
      uVar8 = 0;
      uVar9 = uVar7;
    }
    else {
      uVar8 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract(param_1,lVar4)
      ;
      uVar9 = uVar8;
    }
    uVar7 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName
                      (uVar9,param_2,auVar14._0_8_,uVar7,local_7c);
    lVar3 = *(long *)(param_4 + 0xf0);
    if (lVar3 != 0) {
      uVar7 = (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),uVar7,*(undefined8 *)(lVar3 + 0x28));
    }
    uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteReference
                      (param_1,lVar4,0,uVar8,param_4,param_5);
    if ((uVar5 & 1) == 0) {
      uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CheckForCircularReference
                        (param_1,param_2,lVar4,0,uVar8,param_4,param_5);
      plVar6 = local_78;
      if ((uVar5 & 1) != 0) {
        (**(code **)(*param_2 + 0x5d8))(param_2,uVar7,*(undefined8 *)(*param_2 + 0x5e0));
        Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue
                  (param_1,param_2,lVar4,uVar8,0,param_4,param_5);
        plVar6 = local_78;
      }
    }
    else {
      (**(code **)(*param_2 + 0x5d8))(param_2,uVar7,*(undefined8 *)(*param_2 + 0x5e0));
      Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference
                (param_1,param_2,lVar4);
      plVar6 = local_78;
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar12 = piVar12 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar11 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_076beee0;
    }
  }
LAB_076beec4:
  puVar11 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185a58,0);
LAB_076beee0:
  (*(code *)*puVar11)(plVar6,puVar11[1]);
LAB_076beefc:
  (**(code **)(*param_2 + 0x588))(param_2,*(undefined8 *)(*param_2 + 0x590));
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 != 0) {
    FUN_057e251c(lVar4,*(int *)(lVar4 + 0x18) + -1,DAT_091aeaf8);
    Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized
              (param_1,param_2,param_4,param_3);
    return;
  }
LAB_076bef64:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

