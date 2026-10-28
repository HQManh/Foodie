// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaGenerator$$GenerateInternal
// address: 0x76cf5dc
// body: available
// range: 0x76cf5dc-0x76d0237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d01a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d0228 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d0230 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d0234 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Schema_JsonSchemaGenerator__GenerateInternal
               (long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_0952274e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091840e8);
    FUN_03f5c2a4(&DAT_091c9588);
    FUN_03f5c2a4(&DAT_091717b0);
    FUN_03f5c2a4(&DAT_091794a8);
    FUN_03f5c2a4(&DAT_0917a0c0);
    FUN_03f5c2a4(&DAT_0917a0d0);
    FUN_03f5c2a4(&DAT_09185890);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_09187358);
    FUN_03f5c2a4(&DAT_09187388);
    FUN_03f5c2a4(&DAT_091873c0);
    FUN_03f5c2a4(&DAT_091d1d60);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_091adfa8);
    FUN_03f5c2a4(&DAT_091ae060);
    FUN_03f5c2a4(&DAT_0917c5d8);
    FUN_03f5c2a4(&DAT_0917c598);
    FUN_03f5c2a4(&DAT_091b6a50);
    FUN_03f5c2a4(&DAT_091b7030);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_091b7028);
    FUN_03f5c2a4(&DAT_091b7038);
    FUN_03f5c2a4(&DAT_091b6a60);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_09191fd0);
    FUN_03f5c2a4(&DAT_091ec000);
    FUN_03f5c2a4(&DAT_09191fc8);
    FUN_03f5c2a4(&DAT_09224510);
    DAT_0952274e = 1;
  }
  local_70 = 0;
  local_68 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_09191fc8);
  System_Object___ctor(lVar2,0);
  if (lVar2 == 0) goto LAB_076d01a8;
  puVar12 = (undefined8 *)(lVar2 + 0x10);
  *puVar12 = param_2;
  thunk_FUN_03f5d7b8(puVar12,param_2);
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(*puVar12,DAT_09224510,0);
  uVar3 = Newtonsoft_Json_Schema_JsonSchemaGenerator__GetTypeId(param_1,*puVar12,0);
  lVar4 = Newtonsoft_Json_Schema_JsonSchemaGenerator__GetTypeId(param_1,*puVar12,1);
  uVar5 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(uVar3,0);
  if ((uVar5 & 1) == 0) {
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 == (long *)0x0) goto LAB_076d01a8;
    lVar7 = (**(code **)(*plVar6 + 0x178))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x180));
    if (lVar7 != 0) {
      if ((param_3 != 2) &&
         (uVar5 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag
                            (*(undefined8 *)(lVar7 + 0x30),0x40), (uVar5 & 1) == 0)) {
        if ((*(ulong *)(lVar7 + 0x30) & 0xff) == 0) {
          uVar5 = 0;
        }
        else {
          local_78 = 0;
          FUN_05c30b18(&local_78,(uint)(*(ulong *)(lVar7 + 0x30) >> 0x20) | 0x40,DAT_091b7028);
          uVar5 = local_78;
        }
        *(ulong *)(lVar7 + 0x30) = uVar5;
      }
      if ((param_4 & 1) == 0) {
        return lVar7;
      }
      if ((0xff < *(ushort *)(lVar7 + 0x20)) && ((*(ushort *)(lVar7 + 0x20) & 0xff) != 0)) {
        return lVar7;
      }
      local_78 = local_78 & 0xffffffffffff0000;
      FUN_05c290f8(&local_78,1,DAT_091b6a48);
      *(undefined2 *)(lVar7 + 0x20) = (undefined2)local_78;
      return lVar7;
    }
  }
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = thunk_FUN_03f9944c(DAT_091794a8);
  FUN_05322d94(uVar3,lVar2,DAT_091ec000,0);
  uVar5 = FUN_04ab6f28(uVar14,uVar3,DAT_091c9588);
  if ((uVar5 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    FUN_039b1d98(lVar2);
    plVar6 = *(long **)(lVar2 + 0x10);
    uVar14 = thunk_FUN_03fc39d4(&DAT_092125b8);
    goto LAB_076d01e8;
  }
  plVar6 = (long *)Newtonsoft_Json_Schema_JsonSchemaGenerator__get_ContractResolver(param_1);
  if (plVar6 == (long *)0x0) goto LAB_076d01a8;
  lVar2 = *plVar6;
  uVar3 = *puVar12;
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == DAT_09185890) {
        puVar8 = (undefined8 *)(lVar2 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_076cf914;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar8 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185890,0);
LAB_076cf914:
  plVar6 = (long *)(*(code *)*puVar8)(plVar6,uVar3,puVar8[1]);
  if (plVar6 == (long *)0x0) goto LAB_076d01a8;
  lVar2 = plVar6[0xe];
  if (lVar2 == 0) {
    lVar2 = plVar6[0xf];
  }
  uVar15 = *puVar12;
  uVar3 = thunk_FUN_03f9944c(DAT_091873c0);
  Newtonsoft_Json_Schema_JsonSchema___ctor();
  uVar14 = thunk_FUN_03f9944c(DAT_09191fd0);
  Newtonsoft_Json_Schema_JsonSchemaGenerator_TypeSchema___ctor(uVar14,uVar15,uVar3);
  uVar3 = Newtonsoft_Json_Schema_JsonSchemaGenerator__Push(param_1,uVar14);
  if (lVar4 != 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_076d01a8;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + 0x10);
    *plVar9 = lVar4;
    uVar3 = thunk_FUN_03f5d7b8(plVar9,lVar4);
  }
  if ((param_4 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    local_78 = local_78 & 0xffffffffffff0000;
    uVar3 = FUN_05c290f8(&local_78,1,DAT_091b6a48);
    if (lVar4 == 0) goto LAB_076d01a8;
    *(undefined2 *)(lVar4 + 0x20) = (undefined2)local_78;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  uVar3 = Newtonsoft_Json_Schema_JsonSchemaGenerator__GetTitle(uVar3,*puVar12);
  if (lVar4 == 0) goto LAB_076d01a8;
  puVar8 = (undefined8 *)(lVar4 + 0x18);
  *puVar8 = uVar3;
  uVar3 = thunk_FUN_03f5d7b8(puVar8,uVar3);
  lVar4 = *(long *)(param_1 + 0x30);
  uVar3 = Newtonsoft_Json_Schema_JsonSchemaGenerator__GetDescription(uVar3,*puVar12);
  if (lVar4 == 0) goto LAB_076d01a8;
  puVar8 = (undefined8 *)(lVar4 + 0x28);
  *puVar8 = uVar3;
  uVar3 = thunk_FUN_03f5d7b8(puVar8,uVar3);
  if (lVar2 == 0) {
    iVar13 = *(int *)((long)plVar6 + 0x24);
    if (iVar13 < 5) {
      if (iVar13 < 3) {
        if (iVar13 == 1) {
          lVar2 = *(long *)(param_1 + 0x30);
          uVar1 = 0x10;
          if (param_3 != 2) {
            uVar1 = 0x50;
          }
          local_78 = 0;
          FUN_05c30b18(&local_78,uVar1,DAT_091b7028);
          if (lVar2 == 0) goto LAB_076d01a8;
          *(ulong *)(lVar2 + 0x30) = local_78;
          lVar2 = *(long *)(param_1 + 0x30);
          uVar3 = Newtonsoft_Json_Schema_JsonSchemaGenerator__GetTypeId(param_1,*puVar12,0);
          if (lVar2 == 0) goto LAB_076d01a8;
          puVar8 = (undefined8 *)(lVar2 + 0x10);
          *puVar8 = uVar3;
          thunk_FUN_03f5d7b8(puVar8,uVar3);
          if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_09187388 + 0x130)) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_09187388 + 0x130) * 8 + -8)
              != DAT_09187388)) {
LAB_076d022c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar6);
          }
          Newtonsoft_Json_Schema_JsonSchemaGenerator__GenerateObjectSchema(param_1,*puVar12,plVar6);
        }
        else {
          if (iVar13 != 2) goto LAB_076cfbcc;
          lVar2 = *(long *)(param_1 + 0x30);
          uVar1 = 0x20;
          if (param_3 != 2) {
            uVar1 = 0x60;
          }
          local_78 = 0;
          FUN_05c30b18(&local_78,uVar1,DAT_091b7028);
          if (lVar2 == 0) goto LAB_076d01a8;
          *(ulong *)(lVar2 + 0x30) = local_78;
          lVar2 = *(long *)(param_1 + 0x30);
          uVar3 = Newtonsoft_Json_Schema_JsonSchemaGenerator__GetTypeId(param_1,*puVar12,0);
          if (lVar2 == 0) goto LAB_076d01a8;
          puVar8 = (undefined8 *)(lVar2 + 0x10);
          *puVar8 = uVar3;
          thunk_FUN_03f5d7b8(puVar8,uVar3);
          uVar3 = *puVar12;
          if (*(int *)(DAT_09187480 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar2 = FUN_04bdd338(uVar3,DAT_091d1d60);
          if (lVar2 == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = (uint)(*(char *)(lVar2 + 0x68) == '\0') << 1;
          }
          uVar3 = *puVar12;
          if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__GetCollectionItemType(uVar3,0);
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_095354b8);
          }
          uVar5 = System_Type__op_Inequality(uVar3,0,0);
          if ((uVar5 & 1) != 0) {
            lVar2 = *(long *)(param_1 + 0x30);
            uVar14 = thunk_FUN_03f9944c(DAT_0917c5d8);
            FUN_057e0400(uVar14,DAT_091ae060);
            if (lVar2 == 0) goto LAB_076d01a8;
            puVar12 = (undefined8 *)(lVar2 + 0x98);
            *puVar12 = uVar14;
            thunk_FUN_03f5d7b8(puVar12,uVar14);
            if (*(long *)(param_1 + 0x30) == 0) goto LAB_076d01a8;
            lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x98);
            uVar3 = Newtonsoft_Json_Schema_JsonSchemaGenerator__GenerateInternal
                              (param_1,uVar3,iVar13,0);
            if (lVar2 == 0) goto LAB_076d01a8;
            FUN_039aff78(2,DAT_0917a0d0,lVar2,uVar3);
          }
        }
      }
      else {
        if (iVar13 != 3) {
          if (iVar13 == 4) {
            lVar2 = plVar6[0xc];
            if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = Newtonsoft_Json_Utilities_ReflectionUtils__IsNullable(lVar2,0);
            uVar1 = 0x41;
            if (param_3 == 2) {
              uVar1 = 1;
            }
            lVar2 = *(long *)(param_1 + 0x30);
            if ((uVar5 & 1) == 0) {
              uVar1 = 1;
            }
            goto LAB_076cfa28;
          }
          goto LAB_076cfbcc;
        }
        lVar2 = *(long *)(param_1 + 0x30);
        uVar1 = Newtonsoft_Json_Schema_JsonSchemaGenerator__GetJsonSchemaType
                          (uVar3,*puVar12,param_3);
        local_78 = 0;
        FUN_05c30b18(&local_78,uVar1,DAT_091b7028);
        if (lVar2 == 0) goto LAB_076d01a8;
        *(ulong *)(lVar2 + 0x30) = local_78;
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_076d01a8;
        uVar5 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x30);
        if (((uVar5 >> 0x20 == 4) && ((uVar5 & 0xff) != 0)) &&
           (uVar5 = Newtonsoft_Json_Utilities_TypeExtensions__IsEnum(*puVar12,0),
           uVar3 = DAT_091717b0, (uVar5 & 1) != 0)) {
          plVar6 = (long *)*puVar12;
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
          if (plVar6 == (long *)0x0) goto LAB_076d01a8;
          uVar5 = (**(code **)(*plVar6 + 0x1f8))(plVar6,uVar3,1,*(undefined8 *)(*plVar6 + 0x200));
          if ((uVar5 & 1) == 0) {
            lVar2 = *(long *)(param_1 + 0x30);
            uVar3 = thunk_FUN_03f9944c(DAT_0917c598);
            FUN_057e0400(uVar3,DAT_091adfa8);
            if (lVar2 != 0) {
              puVar8 = (undefined8 *)(lVar2 + 0xe0);
              *puVar8 = uVar3;
              thunk_FUN_03f5d7b8(puVar8,uVar3);
              uVar3 = *puVar12;
              if (*(int *)(DAT_091840e8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar2 = Newtonsoft_Json_Utilities_EnumUtils__GetEnumValuesAndNames(uVar3,0);
              if ((lVar2 != 0) && (lVar4 = *(long *)(lVar2 + 0x20), lVar4 != 0)) {
                uVar5 = 0;
                while( true ) {
                  if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar5) goto LAB_076cfa38;
                  lVar4 = *(long *)(lVar2 + 0x18);
                  if (lVar4 == 0) break;
                  if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  uVar14 = *puVar12;
                  uVar3 = *(undefined8 *)(lVar4 + uVar5 * 8 + 0x20);
                  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar3 = System_Enum__ToObject(uVar14,uVar3,0);
                  if (*(int *)(DAT_09187250 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_09187250);
                  }
                  uVar3 = Newtonsoft_Json_Linq_JToken__FromObject(uVar3,0);
                  if ((*(long *)(param_1 + 0x30) == 0) ||
                     (plVar6 = *(long **)(*(long *)(param_1 + 0x30) + 0xe0), plVar6 == (long *)0x0))
                  break;
                  lVar4 = *plVar6;
                  uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == DAT_0917a0c0) {
                        puVar8 = (undefined8 *)(lVar4 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                        goto LAB_076cffb8;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a0c0,2);
LAB_076cffb8:
                  (*(code *)*puVar8)(plVar6,uVar3,puVar8[1]);
                  lVar4 = *(long *)(lVar2 + 0x20);
                  uVar5 = uVar5 + 1;
                  if (lVar4 == 0) break;
                }
              }
            }
            goto LAB_076d01a8;
          }
        }
      }
    }
    else if (iVar13 < 7) {
      if (iVar13 != 5) {
        if (iVar13 == 6) goto LAB_076cfa0c;
LAB_076cfbcc:
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar14 = thunk_FUN_03fc39d4(&DAT_09211c78);
LAB_076d01e8:
        uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar14,uVar3,plVar6,0);
        thunk_FUN_03fc39d4(&DAT_09187348);
        uVar14 = thunk_FUN_03f9944c();
        Newtonsoft_Json_JsonException___ctor(uVar14,uVar3,0);
        uVar3 = thunk_FUN_03fc39d4(&DAT_091d1a00);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar14,uVar3);
      }
      lVar2 = *(long *)(param_1 + 0x30);
      uVar1 = 0x10;
      if (param_3 != 2) {
        uVar1 = 0x50;
      }
      local_78 = 0;
      FUN_05c30b18(&local_78,uVar1,DAT_091b7028);
      lVar4 = DAT_09189d88;
      if (lVar2 == 0) goto LAB_076d01a8;
      *(ulong *)(lVar2 + 0x30) = local_78;
      uVar3 = *puVar12;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Newtonsoft_Json_Utilities_ReflectionUtils__GetDictionaryKeyValueTypes
                (uVar3,&local_68,&local_70,0);
      uVar3 = local_68;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Type__op_Inequality(uVar3,0,0);
      if ((uVar5 & 1) != 0) {
        lVar2 = Newtonsoft_Json_Schema_JsonSchemaGenerator__get_ContractResolver(param_1);
        if ((lVar2 == 0) || (lVar2 = FUN_039aff78(0,DAT_09185890,lVar2,local_68), lVar2 == 0))
        goto LAB_076d01a8;
        if (*(int *)(lVar2 + 0x24) == 3) {
          lVar2 = *(long *)(param_1 + 0x30);
          uVar3 = Newtonsoft_Json_Schema_JsonSchemaGenerator__GenerateInternal(param_1,local_70,0,0)
          ;
          if (lVar2 == 0) goto LAB_076d01a8;
          puVar12 = (undefined8 *)(lVar2 + 0xc0);
          *puVar12 = uVar3;
          thunk_FUN_03f5d7b8(puVar12,uVar3);
        }
      }
    }
    else {
      if (iVar13 != 7) {
        if (iVar13 == 8) goto LAB_076cfa0c;
        goto LAB_076cfbcc;
      }
      lVar2 = *(long *)(param_1 + 0x30);
      uVar1 = 0x10;
      if (param_3 != 2) {
        uVar1 = 0x50;
      }
      local_78 = 0;
      FUN_05c30b18(&local_78,uVar1,DAT_091b7028);
      if (lVar2 == 0) goto LAB_076d01a8;
      *(ulong *)(lVar2 + 0x30) = local_78;
      lVar2 = *(long *)(param_1 + 0x30);
      uVar3 = Newtonsoft_Json_Schema_JsonSchemaGenerator__GetTypeId(param_1,*puVar12,0);
      if (lVar2 == 0) goto LAB_076d01a8;
      puVar12 = (undefined8 *)(lVar2 + 0x10);
      *puVar12 = uVar3;
      thunk_FUN_03f5d7b8(puVar12,uVar3);
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_09187358 + 0x130)) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_09187358 + 0x130) * 8 + -8) !=
          DAT_09187358)) goto LAB_076d022c;
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_076d01a8;
      *(undefined1 *)(*(long *)(param_1 + 0x30) + 0xd0) = 1;
    }
  }
  else {
LAB_076cfa0c:
    uVar1 = 0x7f;
    lVar2 = *(long *)(param_1 + 0x30);
LAB_076cfa28:
    local_78 = 0;
    FUN_05c30b18(&local_78,uVar1,DAT_091b7028);
    if (lVar2 == 0) goto LAB_076d01a8;
    *(ulong *)(lVar2 + 0x30) = local_78;
  }
LAB_076cfa38:
  lVar2 = Newtonsoft_Json_Schema_JsonSchemaGenerator__Pop(param_1);
  if (lVar2 != 0) {
    return *(long *)(lVar2 + 0x18);
  }
LAB_076d01a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

