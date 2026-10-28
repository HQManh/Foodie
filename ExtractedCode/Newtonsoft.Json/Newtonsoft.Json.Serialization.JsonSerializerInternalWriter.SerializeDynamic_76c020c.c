// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDynamic
// address: 0x76c020c
// body: available
// range: 0x76c020c-0x76c044b inclusive
// range: 0x76c050c-0x76c072b inclusive
// range: 0x76c07dc-0x76c08cf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c08c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c08c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c08c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c08cc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076c0854) */
/* WARNING: Removing unreachable block (ram,0x076c08cc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDynamic
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
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  int iVar12;
  long local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_095226e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b4d0);
    FUN_03f5c2a4(&DAT_0919b4d8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091aeac8);
    FUN_03f5c2a4(&DAT_091aeaf8);
    FUN_03f5c2a4(&DAT_091aeb08);
    DAT_095226e7 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_78 = (long *)0x0;
  Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerializing
            (param_1,param_2,param_4,param_3);
  lVar4 = DAT_091aeac8;
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    lVar9 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *puVar10 = param_3;
        thunk_FUN_03f5d7b8(puVar10,param_3);
      }
      else {
        FUN_057e0c68(lVar3,param_3,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                    );
      }
      Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (((param_2 != (long *)0x0) &&
          (Newtonsoft_Json_JsonWriter__get_Top(param_2,0), param_4 != 0)) &&
         (lVar4 = *(long *)(param_4 + 0xc0), lVar4 != 0)) {
        iVar12 = 0;
        while (iVar2 = FUN_06c773c8(lVar4,DAT_0919b4d0), iVar12 < iVar2) {
          if ((*(long *)(param_4 + 0xc0) == 0) ||
             (lVar4 = FUN_06c7745c(*(long *)(param_4 + 0xc0),iVar12,DAT_0919b4d8), lVar4 == 0))
          goto LAB_076c08c0;
          if ((*(char *)(lVar4 + 0x83) != '\0') &&
             (uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CalculatePropertyValues
                                (param_1,param_2,param_3,param_4,param_5,lVar4,&uStack_68,&local_70)
             , (uVar5 & 1) != 0)) {
            Newtonsoft_Json_Serialization_JsonProperty__WritePropertyName(lVar4,param_2,0);
            Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue
                      (param_1,param_2,local_70,uStack_68,lVar4,param_4,param_5);
          }
          lVar4 = *(long *)(param_4 + 0xc0);
          iVar12 = iVar12 + 1;
          if (lVar4 == 0) goto LAB_076c08c0;
        }
        plVar6 = (long *)Newtonsoft_Json_Utilities_DynamicUtils__GetDynamicMemberNames(param_3,0);
        if (plVar6 != (long *)0x0) {
          lVar4 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 == 0) goto LAB_076c0550;
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_076c0538;
        }
      }
    }
  }
  goto LAB_076c08c0;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar11 = piVar11 + 4;
    if (uVar5 == 0) break;
LAB_076c0538:
    if (*(long *)(piVar11 + -2) == DAT_0917a768) {
      puVar10 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_076c056c;
    }
  }
LAB_076c0550:
  puVar10 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a768,0);
LAB_076c056c:
  plVar6 = (long *)(*(code *)*puVar10)(plVar6,puVar10[1]);
  do {
    local_78 = plVar6;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_09185b10) {
          puVar10 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076c05e8;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_076c05e8:
    uVar5 = (*(code *)*puVar10)(plVar6,puVar10[1]);
    plVar6 = local_78;
    if ((uVar5 & 1) == 0) {
      if (local_78 == (long *)0x0) goto LAB_076c0844;
      lVar4 = *local_78;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_076c081c;
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *local_78;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917ae48) {
          puVar10 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076c064c;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(local_78,DAT_0917ae48,0);
LAB_076c064c:
    uVar7 = (*(code *)*puVar10)(plVar6,puVar10[1]);
    uVar5 = Newtonsoft_Json_Serialization_JsonDynamicContract__TryGetMember
                      (param_4,param_3,uVar7,&local_80,0);
    plVar6 = local_78;
    if ((uVar5 & 1) != 0) {
      if (local_80 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract(param_1);
      }
      uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteDynamicProperty
                        (param_1,local_80);
      plVar6 = local_78;
      if (((uVar5 & 1) != 0) &&
         (uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CheckForCircularReference
                            (param_1,param_2,local_80,0,uVar8,param_4,param_5), plVar6 = local_78,
         (uVar5 & 1) != 0)) {
        lVar4 = *(long *)(param_4 + 200);
        if (lVar4 != 0) {
          uVar7 = (**(code **)(lVar4 + 0x18))
                            (*(undefined8 *)(lVar4 + 0x40),uVar7,*(undefined8 *)(lVar4 + 0x28));
        }
        (**(code **)(*param_2 + 0x5d8))(param_2,uVar7,*(undefined8 *)(*param_2 + 0x5e0));
        Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue
                  (param_1,param_2,local_80,uVar8,0,param_4,param_5);
        plVar6 = local_78;
      }
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar11 = piVar11 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar10 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_076c0838;
    }
  }
LAB_076c081c:
  puVar10 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185a58,0);
LAB_076c0838:
  (*(code *)*puVar10)(plVar6,puVar10[1]);
LAB_076c0844:
  (**(code **)(*param_2 + 0x588))(param_2,*(undefined8 *)(*param_2 + 0x590));
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 != 0) {
    FUN_057e251c(lVar4,*(int *)(lVar4 + 0x18) + -1,DAT_091aeaf8);
    Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized
              (param_1,param_2,param_4,param_3);
    return;
  }
LAB_076c08c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

