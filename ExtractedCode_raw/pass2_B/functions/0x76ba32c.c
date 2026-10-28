// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObjectUsingCreatorWithParameters
// address: 0x76ba32c
// body: available
// range: 0x76ba32c-0x76bb367 inclusive
// range: 0x76bb36c-0x76bb64f inclusive
// range: 0x76bb654-0x76bb657 inclusive
// range: 0x76bb65c-0x76bb65f inclusive
// range: 0x76bb664-0x76bb667 inclusive
// range: 0x76bb6e8-0x76bb947 inclusive
// range: 0x76bbae4-0x76bbaeb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76baaac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bb364 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bb64c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bb654 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bb65c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bb664 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bb8b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bb8b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bb8bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bb8c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bb8c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bb8c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076bae78) */
/* WARNING: Removing unreachable block (ram,0x076bb380) */
/* WARNING: Removing unreachable block (ram,0x076bb384) */
/* WARNING: Removing unreachable block (ram,0x076bab3c) */
/* WARNING: Removing unreachable block (ram,0x076bb644) */
/* WARNING: Removing unreachable block (ram,0x076bb648) */
/* WARNING: Removing unreachable block (ram,0x076bb718) */

undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObjectUsingCreatorWithParameters
          (long param_1,long *param_2,long param_3,undefined8 param_4,long param_5,long param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  int *piVar13;
  uint uVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  long *local_e0;
  long **pplStack_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  long local_c0;
  long **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 local_88;
  long *local_80;
  long **pplStack_78;
  undefined8 *local_70;
  long *local_68;
  
  if ((DAT_095226c0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b4b8);
    FUN_03f5c2a4(&DAT_0919b4c0);
    FUN_03f5c2a4(&DAT_0919b4d0);
    FUN_03f5c2a4(&DAT_09192008);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091c92e0);
    FUN_03f5c2a4(&DAT_091ca5c8);
    FUN_03f5c2a4(&DAT_091a5570);
    FUN_03f5c2a4(&DAT_091a5578);
    FUN_03f5c2a4(&DAT_091a5580);
    FUN_03f5c2a4(&DAT_091794b0);
    FUN_03f5c2a4(&DAT_09178c70);
    FUN_03f5c2a4(&DAT_09185890);
    FUN_03f5c2a4(&DAT_09185a30);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b08);
    FUN_03f5c2a4(&DAT_0917aca0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_09185f80);
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09186938);
    FUN_03f5c2a4(&DAT_091872e0);
    FUN_03f5c2a4(&DAT_09187338);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_091b31d8);
    FUN_03f5c2a4(&DAT_091b31e0);
    FUN_03f5c2a4(&DAT_091b6ce8);
    FUN_03f5c2a4(&DAT_091b7790);
    FUN_03f5c2a4(&DAT_091b7788);
    FUN_03f5c2a4(&DAT_091b7798);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091da6d8);
    FUN_03f5c2a4(&DAT_091ec030);
    FUN_03f5c2a4(&DAT_091ec038);
    FUN_03f5c2a4(&DAT_091ec050);
    FUN_03f5c2a4(&DAT_09192000);
    FUN_03f5c2a4(&DAT_09191ff8);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_092007c0);
    FUN_03f5c2a4(&DAT_09219d38);
    DAT_095226c0 = 1;
  }
  local_70 = (undefined8 *)0x0;
  local_68 = (long *)0x0;
  local_80 = (long *)0x0;
  pplStack_78 = (long **)0x0;
  local_90 = (long *)0x0;
  local_88 = 0;
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_5,DAT_09219d38);
  if (param_3 == 0) goto LAB_076bb8e8;
  uVar4 = Newtonsoft_Json_Serialization_JsonObjectContract__get_HasRequiredOrDefaultValueProperties
                    (param_3);
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_076bb8e8;
    uVar14 = *(uint *)(*(long *)(param_1 + 0x20) + 0x2c) >> 1 & 1;
  }
  else {
    uVar14 = 1;
  }
  plVar16 = *(long **)(param_1 + 0x28);
  uVar15 = *(undefined8 *)(param_3 + 0x60);
  if (plVar16 != (long *)0x0) {
    lVar8 = *plVar16;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_09186850) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_076ba638;
        }
        uVar4 = uVar4 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar16,DAT_09186850,0);
LAB_076ba638:
    iVar1 = (*(code *)*puVar5)(plVar16,puVar5[1]);
    if (2 < iVar1) {
      uVar6 = Newtonsoft_Json_Serialization_JsonObjectContract__get_CreatorParameters(param_3);
      if (*(int *)(DAT_09191ff8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09191ff8);
      }
      uVar7 = DAT_091f86e8;
      puVar5 = *(undefined8 **)(DAT_09191ff8 + 0xb8);
      lVar8 = puVar5[1];
      if (lVar8 == 0) {
        if (*(int *)(DAT_09191ff8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09191ff8);
          puVar5 = *(undefined8 **)(DAT_09191ff8 + 0xb8);
        }
        uVar18 = *puVar5;
        lVar8 = thunk_FUN_03f9944c(DAT_09178c70);
        FUN_05324070(lVar8,uVar18,DAT_091ec030,0);
        plVar16 = (long *)(*(long *)(DAT_09191ff8 + 0xb8) + 8);
        *plVar16 = lVar8;
        thunk_FUN_03f5d7b8(plVar16,lVar8);
      }
      uVar6 = FUN_04af8044(uVar6,lVar8,DAT_091ca5c8);
      uVar6 = System_String__Join(uVar7,uVar6,0);
      if (param_2 == (long *)0x0) goto LAB_076bb8e8;
      plVar16 = *(long **)(param_1 + 0x28);
      uVar7 = (**(code **)(*param_2 + 0x278))(param_2,*(undefined8 *)(*param_2 + 0x280));
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182ff8);
      }
      uVar18 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                        (DAT_092007c0,uVar18,*(undefined8 *)(param_3 + 0x60),uVar6);
      if (*(int *)(DAT_09187398 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187398);
      }
      uVar18 = thunk_FUN_03f99350(param_2,DAT_09185f18);
      uVar6 = Newtonsoft_Json_JsonPosition__FormatMessage(uVar18,uVar7,uVar6,0);
      if (plVar16 == (long *)0x0) goto LAB_076bb8e8;
      lVar8 = *plVar16;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_09186850) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_076ba818;
          }
          uVar4 = uVar4 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar16,DAT_09186850,1);
LAB_076ba818:
      (*(code *)*puVar5)(plVar16,3,uVar6,0,puVar5[1]);
    }
  }
  lVar8 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolvePropertyAndCreatorValues
                    (param_1,param_3,param_4,param_2,uVar15);
  if (uVar14 != 0) {
    if (*(long *)(param_3 + 0xd8) != 0) {
      plVar16 = (long *)FUN_06c779c4(*(long *)(param_3 + 0xd8),DAT_0919b4b8);
      pplStack_d8 = &local_68;
      local_e0 = (long *)0x0;
joined_r0x076ba878:
      do {
        do {
          local_68 = plVar16;
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = *plVar16;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_076ba904;
              }
              uVar4 = uVar4 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar16,DAT_09185b10,0);
LAB_076ba904:
          uVar4 = (*(code *)*puVar5)(plVar16,puVar5[1]);
          plVar16 = local_68;
          if ((uVar4 & 1) == 0) {
            if (local_68 == (long *)0x0) goto LAB_076bab40;
            lVar9 = *local_68;
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar4 == 0) goto LAB_076bab08;
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_076baaf0;
          }
          lVar9 = thunk_FUN_03f9944c(DAT_09192000);
          Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0___ctor
                    (lVar9,0);
          plVar16 = local_68;
          if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar10 = *local_68;
          uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar4 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_0917aca0) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_076ba97c;
              }
              uVar4 = uVar4 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917aca0,0);
LAB_076ba97c:
          lVar10 = (*(code *)*puVar5)(plVar16,puVar5[1]);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar17 = (long *)(lVar9 + 0x10);
          *plVar17 = lVar10;
          thunk_FUN_03f5d7b8(plVar17);
          if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar16 = local_68;
        } while (*(char *)(*plVar17 + 0x80) != '\0');
        uVar15 = thunk_FUN_03f9944c(DAT_091794b0);
        FUN_05322d94(uVar15,lVar9,DAT_091ec050,0);
        uVar4 = FUN_04ab300c(lVar8,uVar15,DAT_091c92e0);
        plVar16 = local_68;
      } while ((uVar4 & 1) == 0);
      if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar15 = *(undefined8 *)(*plVar17 + 0x30);
      lVar9 = thunk_FUN_03f9944c(DAT_09192008);
      Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___ctor
                (lVar9,uVar15,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(long *)(lVar9 + 0x18) = *plVar17;
      thunk_FUN_03f5d7b8();
      local_c0 = 0;
      FUN_05c30b18(&local_c0,0,DAT_091b7788);
      *(long *)(lVar9 + 0x28) = local_c0;
      lVar10 = DAT_091b31d8;
      if (lVar8 != 0) {
        lVar11 = *(long *)(lVar8 + 0x10);
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar3 = *(uint *)(lVar8 + 0x18);
          if (uVar3 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar3 + 1;
            plVar16 = (long *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
            *plVar16 = lVar9;
            thunk_FUN_03f5d7b8(plVar16,lVar9);
            plVar16 = local_68;
          }
          else {
            FUN_057e0c68(lVar8,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            plVar16 = local_68;
          }
          goto joined_r0x076ba878;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    goto LAB_076bb8e8;
  }
  goto LAB_076bab40;
LAB_076bad90:
  if (puVar5[3] != 0) {
    uVar15 = Newtonsoft_Json_Serialization_JsonObjectContract__get_CreatorParameters(param_3);
    if (*(int *)(DAT_09191ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar12 = *(undefined8 **)(DAT_09191ff8 + 0xb8);
    lVar9 = puVar12[2];
    if (lVar9 == 0) {
      if (*(int *)(DAT_09191ff8 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar12 = *(undefined8 **)(DAT_09191ff8 + 0xb8);
      }
      uVar6 = *puVar12;
      lVar9 = thunk_FUN_03f9944c(DAT_09178c70);
      FUN_05324070(lVar9,uVar6,DAT_091ec038,0);
      plVar17 = (long *)(*(long *)(DAT_09191ff8 + 0xb8) + 0x10);
      *plVar17 = lVar9;
      thunk_FUN_03f5d7b8(plVar17,lVar9);
    }
    if (puVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = FUN_04d68a38(uVar15,lVar9,*(undefined8 *)(puVar5[3] + 0x60),DAT_091da6d8);
    if (lVar9 != 0) {
LAB_076bac5c:
      if (*(char *)(lVar9 + 0x80) == '\0') {
        if (((uVar14 != 0) && ((ulong)puVar5[5] >> 0x21 == 0)) && ((puVar5[5] & 0xff) != 0)) {
          plVar17 = (long *)(lVar9 + 0x48);
          if (*plVar17 == 0) {
            lVar10 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe
                               (param_1,*(undefined8 *)(lVar9 + 0x40));
            *plVar17 = lVar10;
            thunk_FUN_03f5d7b8(plVar17);
          }
          local_88 = *(undefined8 *)(lVar9 + 0x90);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = FUN_05c30b5c(&local_88,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),
                               DAT_091b6ce8);
          if ((uVar3 >> 1 & 1) != 0) {
            uVar15 = Newtonsoft_Json_Serialization_JsonProperty__GetResolvedDefaultValue(lVar9);
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            uVar15 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType
                               (uVar6,param_2,uVar15,uVar6,*(undefined8 *)(lVar9 + 0x48),
                                *(undefined8 *)(lVar9 + 0x40));
            puVar5[6] = uVar15;
            thunk_FUN_03f5d7b8();
          }
        }
        lVar10 = Newtonsoft_Json_Serialization_JsonObjectContract__get_CreatorParameters(param_3);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar3 = FUN_06c77a50(lVar10,lVar9,DAT_0919b4c0);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = puVar5[6];
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar16 + 0x40)), lVar10 == 0)) {
          uVar15 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar15,0);
        }
        if (*(uint *)(plVar16 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar16[(long)(int)uVar3 + 4] = lVar9;
        thunk_FUN_03f5d7b8(plVar16 + (long)(int)uVar3 + 4,lVar9);
        *(undefined1 *)(puVar5 + 7) = 1;
      }
    }
  }
  goto LAB_076babc0;
LAB_076bafb4:
  if ((lVar10 == 0) || (*(char *)(lVar9 + 0x82) != '\0')) goto LAB_076baf04;
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar16 = *(long **)(*(long *)(param_1 + 0x20) + 0x40);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar11 = *plVar16;
  uVar6 = *(undefined8 *)(lVar9 + 0x40);
  uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar4 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == DAT_09185890) {
        puVar12 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_076bb058;
      }
      uVar4 = uVar4 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar4 != 0);
  }
  puVar12 = (undefined8 *)FUN_03f95da8(plVar16,DAT_09185890,0);
LAB_076bb058:
  plVar16 = (long *)(*(code *)*puVar12)(plVar16,uVar6,puVar12[1]);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)((long)plVar16 + 0x24) == 2) {
    if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(DAT_091872e0 + 0x130)) ||
       (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(DAT_091872e0 + 0x130) * 8 + -8) !=
        DAT_091872e0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar16);
    }
    if ((*(char *)((long)plVar16 + 0xf2) != '\0') && ((char)plVar16[5] == '\0')) {
      plVar16 = *(long **)(lVar9 + 0x68);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *plVar16;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_09186938) {
            puVar12 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_076bb124;
          }
          uVar4 = uVar4 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar4 != 0);
      }
      puVar12 = (undefined8 *)FUN_03f95da8(plVar16,DAT_09186938,1);
LAB_076bb124:
      lVar9 = (*(code *)*puVar12)(plVar16,uVar15,puVar12[1]);
      if (lVar9 != 0) {
        uVar6 = System_Object__GetType(lVar9,0);
        uVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContract
                          (param_1,uVar6);
        lVar11 = FUN_039bb5f0(uVar6,DAT_091872e0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(char *)(lVar11 + 0xf1) == '\0') {
          plVar16 = (long *)FUN_039bcaa8(lVar9,DAT_09185f80);
        }
        else {
          plVar16 = (long *)Newtonsoft_Json_Serialization_JsonArrayContract__CreateWrapper
                                      (lVar11,lVar9);
        }
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar4 = FUN_039afee4(6,DAT_09185f80,plVar16);
        if ((uVar4 & 1) == 0) {
          if (*(char *)(lVar11 + 0xf1) == '\0') {
            auVar19 = FUN_039bcaa8(lVar10,DAT_09185f80);
          }
          else {
            auVar19 = Newtonsoft_Json_Serialization_JsonArrayContract__CreateWrapper(lVar11,lVar10);
          }
          uVar6 = auVar19._8_8_;
          if (auVar19._0_8_ != 0) {
            plVar17 = (long *)FUN_039afee4(0,DAT_09185b08,auVar19._0_8_);
            pplStack_d8 = &local_90;
            local_e0 = (long *)0x0;
            local_d0 = &uStack_98;
            do {
              local_90 = plVar17;
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar9 = *plVar17;
              uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar4 != 0) {
                piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                    puVar12 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_076bb274;
                  }
                  uVar4 = uVar4 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar4 != 0);
              }
              puVar12 = (undefined8 *)FUN_03f95da8(plVar17,DAT_09185b10,0);
LAB_076bb274:
              uVar4 = (*(code *)*puVar12)(plVar17,puVar12[1]);
              plVar17 = local_90;
              if ((uVar4 & 1) == 0) goto LAB_076bb36c;
              if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar9 = *local_90;
              uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar4 != 0) {
                piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                    puVar12 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_076bb2e4;
                  }
                  uVar4 = uVar4 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar4 != 0);
              }
              puVar12 = (undefined8 *)FUN_03f95da8(local_90,DAT_09185b10,1);
LAB_076bb2e4:
              uVar6 = (*(code *)*puVar12)(plVar17,puVar12[1]);
              lVar9 = *plVar16;
              uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar4 != 0) {
                piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == DAT_09185f80) {
                    puVar12 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                    goto LAB_076bb34c;
                  }
                  uVar4 = uVar4 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar4 != 0);
              }
              puVar12 = (undefined8 *)FUN_03f95da8(plVar16,DAT_09185f80,2);
LAB_076bb34c:
              (*(code *)*puVar12)(plVar16,uVar6,puVar12[1]);
              plVar17 = local_90;
            } while( true );
          }
          goto LAB_076bb93c;
        }
      }
    }
  }
  else if (*(int *)((long)plVar16 + 0x24) == 5) {
    if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(DAT_09187338 + 0x130)) ||
       (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(DAT_09187338 + 0x130) * 8 + -8) !=
        DAT_09187338)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar16);
    }
    if ((char)plVar16[5] == '\0') {
      plVar17 = *(long **)(lVar9 + 0x68);
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *plVar17;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_09186938) {
            puVar12 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_076bb430;
          }
          uVar4 = uVar4 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar4 != 0);
      }
      puVar12 = (undefined8 *)FUN_03f95da8(plVar17,DAT_09186938,1);
LAB_076bb430:
      lVar9 = (*(code *)*puVar12)(plVar17,uVar15,puVar12[1]);
      if (lVar9 != 0) {
        if ((char)plVar16[0x20] == '\0') {
          plVar17 = (long *)FUN_039bcaa8(lVar9,DAT_09185a20);
        }
        else {
          plVar17 = (long *)Newtonsoft_Json_Serialization_JsonDictionaryContract__CreateWrapper
                                      (plVar16,lVar9);
        }
        if ((char)plVar16[0x20] == '\0') {
          auVar19 = FUN_039bcaa8(lVar10,DAT_09185a20);
        }
        else {
          auVar19 = Newtonsoft_Json_Serialization_JsonDictionaryContract__CreateWrapper
                              (plVar16,lVar10);
        }
        uVar6 = auVar19._8_8_;
        if (auVar19._0_8_ != 0) {
          local_a0 = (long *)FUN_039afee4(9,DAT_09185a20);
          pplStack_d8 = &local_a0;
          local_e0 = (long *)0x0;
          local_d0 = &uStack_a8;
          local_c8 = &local_b0;
          do {
            plVar16 = local_a0;
            if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *local_a0;
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar4 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                  puVar12 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_076bb538;
                }
                uVar4 = uVar4 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar4 != 0);
            }
            puVar12 = (undefined8 *)FUN_03f95da8(local_a0,DAT_09185b10,0);
LAB_076bb538:
            uVar4 = (*(code *)*puVar12)(plVar16,puVar12[1]);
            plVar16 = local_a0;
            if ((uVar4 & 1) == 0) goto LAB_076bb630;
            if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *local_a0;
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar4 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == DAT_09185a30) {
                  puVar12 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                  goto LAB_076bb5a8;
                }
                uVar4 = uVar4 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar4 != 0);
            }
            puVar12 = (undefined8 *)FUN_03f95da8(local_a0,DAT_09185a30,2);
LAB_076bb5a8:
            auVar19 = (*(code *)*puVar12)(plVar16,puVar12[1]);
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *plVar17;
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar4 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == DAT_09185a20) {
                  puVar12 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_076bb618;
                }
                uVar4 = uVar4 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar4 != 0);
            }
            puVar12 = (undefined8 *)FUN_03f95da8(plVar17,DAT_09185a20,1);
LAB_076bb618:
            (*(code *)*puVar12)(plVar17,auVar19._0_8_,auVar19._8_8_,puVar12[1]);
          } while( true );
        }
LAB_076bb93c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(0,uVar6,0);
      }
    }
  }
LAB_076bb040:
  *(undefined1 *)(puVar5 + 7) = 1;
  goto LAB_076baf04;
LAB_076bb36c:
  FUN_039aee4c(&local_e0);
  goto LAB_076bb040;
LAB_076bb630:
  FUN_03b4fd5c(&local_e0);
  goto LAB_076bb040;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar13 = piVar13 + 4;
    if (uVar4 == 0) break;
LAB_076baaf0:
    if (*(long *)(piVar13 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_076bab24;
    }
  }
LAB_076bab08:
  puVar5 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_076bab24:
  (*(code *)*puVar5)(plVar16,puVar5[1]);
LAB_076bab40:
  lVar9 = Newtonsoft_Json_Serialization_JsonObjectContract__get_CreatorParameters(param_3);
  if (lVar9 != 0) {
    uVar2 = FUN_06c773c8(lVar9,DAT_0919b4d0);
    plVar16 = (long *)FUN_03f5c394(DAT_09180318,uVar2);
    if (lVar8 != 0) {
      FUN_057e185c(&local_e0,lVar8,DAT_091b31e0);
      local_80 = local_e0;
      local_e0 = (long *)0x0;
      pplStack_78 = pplStack_d8;
      local_70 = local_d0;
      pplStack_d8 = &local_80;
LAB_076babc0:
      uVar4 = FUN_071bd28c(&local_80,DAT_091a5578);
      puVar5 = local_70;
      plVar17 = local_e0;
      if ((uVar4 & 1) != 0) {
        if (uVar14 == 0) {
          if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        else {
          if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = local_70[3];
          if ((lVar9 != 0) && (*(char *)(local_70 + 5) == '\0')) {
            if ((long *)local_70[6] == (long *)0x0) {
              uVar2 = 1;
            }
            else if (*(long *)local_70[6] == DAT_09535468) {
              uVar4 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CoerceEmptyStringToNull
                                (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x48));
              uVar2 = 1;
              if ((uVar4 & 1) == 0) {
                uVar2 = 2;
              }
            }
            else {
              uVar2 = 2;
            }
            local_c0 = 0;
            FUN_05c30b18(&local_c0,uVar2,DAT_091b7788);
            puVar5[5] = local_c0;
          }
        }
        lVar9 = puVar5[4];
        if (lVar9 == 0) goto LAB_076bad90;
        goto LAB_076bac5c;
      }
      FUN_071bd288(pplStack_d8,DAT_091a5570);
      if (plVar17 != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c548(plVar17);
      }
      if (param_5 != 0) {
        uVar15 = (**(code **)(param_5 + 0x18))
                           (*(undefined8 *)(param_5 + 0x40),plVar16,*(undefined8 *)(param_5 + 0x28))
        ;
        if (param_6 != 0) {
          Newtonsoft_Json_Serialization_JsonSerializerInternalReader__AddReference
                    (param_1,param_2,param_6,uVar15);
        }
        Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserializing
                  (param_1,param_2,param_3,uVar15);
        FUN_057e185c(&local_e0,lVar8,DAT_091b31e0);
        local_b8 = &local_80;
        local_c0 = 0;
        pplStack_78 = pplStack_d8;
        local_80 = local_e0;
        local_70 = local_d0;
LAB_076baf04:
        do {
          uVar4 = FUN_071bd28c(&local_80,DAT_091a5578);
          puVar5 = local_70;
          lVar9 = local_c0;
          if ((uVar4 & 1) == 0) {
            FUN_071bd288(local_b8,DAT_091a5570);
            if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c548(lVar9);
            }
            if (*(long *)(param_3 + 0xe0) != 0) {
              FUN_057e185c(&local_e0,lVar8,DAT_091b31e0);
              local_70 = local_d0;
              pplStack_78 = pplStack_d8;
              local_80 = local_e0;
              local_e0 = (long *)0x0;
              pplStack_d8 = &local_80;
              while (uVar4 = FUN_071bd28c(&local_80,DAT_091a5578), (uVar4 & 1) != 0) {
                if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if ((*(char *)(local_70 + 7) == '\0') &&
                   (((ulong)local_70[5] >> 0x20 != 0 || ((local_70[5] & 0xff) == 0)))) {
                  lVar9 = *(long *)(param_3 + 0xe0);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  (**(code **)(lVar9 + 0x18))
                            (*(undefined8 *)(lVar9 + 0x40),uVar15,local_70[2],local_70[6],
                             *(undefined8 *)(lVar9 + 0x28));
                }
              }
              FUN_071bd288(&local_80,DAT_091a5570);
            }
            if (uVar14 != 0) {
              FUN_057e185c(&local_e0,lVar8,DAT_091b31e0);
              local_70 = local_d0;
              pplStack_78 = pplStack_d8;
              local_80 = local_e0;
              local_e0 = (long *)0x0;
              pplStack_d8 = &local_80;
              while (uVar4 = FUN_071bd28c(&local_80,DAT_091a5578), puVar5 = local_70,
                    (uVar4 & 1) != 0) {
                if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (local_70[3] != 0) {
                  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar2 = (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270))
                  ;
                  Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EndProcessProperty
                            (param_1,uVar15,param_2,param_3,uVar2,puVar5[3],
                             *(undefined4 *)((long)puVar5 + 0x2c),*(char *)(puVar5 + 7) == '\0');
                }
              }
              FUN_071bd288(&local_80,DAT_091a5570);
            }
            Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserialized
                      (param_1,param_2,param_3,uVar15);
            return uVar15;
          }
          if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        } while ((((*(char *)(local_70 + 7) != '\0') || (lVar9 = local_70[3], lVar9 == 0)) ||
                 (*(char *)(lVar9 + 0x80) != '\0')) ||
                (((ulong)local_70[5] >> 0x20 == 0 && ((local_70[5] & 0xff) != 0))));
        lVar10 = local_70[6];
        uVar4 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldSetPropertyValue
                          (param_1,lVar9,param_3,lVar10);
        if ((uVar4 & 1) == 0) goto LAB_076bafb4;
        plVar16 = *(long **)(lVar9 + 0x68);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *plVar16;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_09186938) {
              puVar12 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_076bb02c;
            }
            uVar4 = uVar4 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar4 != 0);
        }
        puVar12 = (undefined8 *)FUN_03f95da8(plVar16,DAT_09186938,0);
LAB_076bb02c:
        (*(code *)*puVar12)(plVar16,uVar15,lVar10,puVar12[1]);
        goto LAB_076bb040;
      }
    }
  }
LAB_076bb8e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

