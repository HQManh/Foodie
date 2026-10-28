// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateList
// address: 0x76b5090
// body: available
// range: 0x76b5090-0x76b5707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b5148 to 0x76b3e60 Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJToken (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76b5250 to 0x76b15b0 Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateList (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76b5378 to 0x7687fac Newtonsoft.Json.Utilities.CollectionUtils$$ToMultidimensionalArray (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76b55b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b56f4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b56f8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b5704 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateList
                 (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,long param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  char local_44 [4];
  
  lVar8 = param_1;
  if ((DAT_095226b0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a138);
    FUN_03f5c2a4(&DAT_0917a130);
    FUN_03f5c2a4(&DAT_091857d8);
    FUN_03f5c2a4(&DAT_09185f80);
    FUN_03f5c2a4(&DAT_091869b8);
    lVar8 = FUN_03f5c2a4(&DAT_09180318);
    DAT_095226b0 = 1;
  }
  local_44[0] = '\0';
  uVar9 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasNoDefinedType
                    (lVar8,param_4);
  if ((uVar9 & 1) != 0) {
    plVar10 = (long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJToken
                                (uVar9,param_2,param_4);
    return plVar10;
  }
  auVar19 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureArrayContract
                      (uVar9,param_2,param_3,param_4);
  if (param_6 != 0) {
    if (param_4 != 0) {
      if (*(char *)(param_4 + 0xf2) == '\0') {
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar14 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        FUN_039b1d98(param_4);
        uVar18 = *(undefined8 *)(param_4 + 0x58);
        puVar15 = &DAT_091fe080;
        goto LAB_076b56bc;
      }
      if ((*(char *)(param_4 + 0xf1) != '\0') ||
         (lVar8 = thunk_FUN_03f99350(param_6,DAT_09185f80), lVar8 == 0)) {
        lVar8 = Newtonsoft_Json_Serialization_JsonArrayContract__CreateWrapper(param_4,param_6);
      }
      auVar19._8_8_ = lVar8;
      auVar19._0_8_ = lVar8;
      if (param_1 != 0) {
        plVar10 = (long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateList
                                    (param_1,lVar8,param_2,param_4,param_5,param_7);
        return plVar10;
      }
    }
    goto LAB_076b55b8;
  }
  auVar19 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewList
                      (param_1,param_2,param_4,local_44);
  cVar5 = local_44[0];
  plVar10 = auVar19._0_8_;
  if (local_44[0] == '\0') {
LAB_076b52f8:
    if (param_4 == 0) goto LAB_076b55b8;
  }
  else {
    if (param_7 != 0) {
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar14 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      FUN_039b1d98(param_4);
      uVar18 = *(undefined8 *)(param_4 + 0x60);
      puVar15 = &DAT_091fe088;
      goto LAB_076b56bc;
    }
    if (param_4 == 0) goto LAB_076b55b8;
    auVar19 = Newtonsoft_Json_Serialization_JsonContract__get_OnSerializingCallbacks(param_4);
    plVar12 = auVar19._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar19._8_8_;
    auVar19 = auVar1 << 0x40;
    if (plVar12 == (long *)0x0) goto LAB_076b55b8;
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == DAT_0917a130) {
          puVar11 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_076b5260;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917a130,0);
LAB_076b5260:
    iVar6 = (*(code *)*puVar11)(plVar12,puVar11[1]);
    if (0 < iVar6) {
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar14 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      FUN_039b1d98(param_4);
      uVar18 = *(undefined8 *)(param_4 + 0x60);
      puVar15 = &DAT_091fda38;
LAB_076b56bc:
      uVar16 = thunk_FUN_03fc39d4(puVar15);
      uVar14 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar16,uVar14,uVar18);
      uVar14 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar14,0);
      uVar18 = thunk_FUN_03fc39d4(&DAT_091d1af0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar14,uVar18);
    }
    auVar19 = Newtonsoft_Json_Serialization_JsonContract__get_OnErrorCallbacks(param_4);
    plVar12 = auVar19._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar19._8_8_;
    auVar19 = auVar2 << 0x40;
    if (plVar12 == (long *)0x0) goto LAB_076b55b8;
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == DAT_0917a138) {
          puVar11 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_076b52d8;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917a138,0);
LAB_076b52d8:
    iVar6 = (*(code *)*puVar11)(plVar12,puVar11[1]);
    if (0 < iVar6) {
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar14 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      FUN_039b1d98(param_4);
      uVar18 = *(undefined8 *)(param_4 + 0x60);
      puVar15 = &DAT_091fda28;
      goto LAB_076b56bc;
    }
    auVar19 = Newtonsoft_Json_Serialization_JsonArrayContract__get_HasParameterizedCreatorInternal
                        (param_4);
    if ((auVar19._0_8_ & 1) != 0) goto LAB_076b52f8;
    if (*(char *)(param_4 + 0xf0) == '\0') {
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar14 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      FUN_039b1d98(param_4);
      uVar18 = *(undefined8 *)(param_4 + 0x60);
      puVar15 = &DAT_091fdcf0;
      goto LAB_076b56bc;
    }
  }
  if (*(char *)(param_4 + 200) == '\0') {
    auVar19 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateList
                        (param_1,plVar10,param_2,param_4,param_5,param_7);
  }
  else {
    auVar19 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray
                        (param_1,plVar10,param_2,param_4,param_5,param_7);
  }
  if (cVar5 == '\0') {
    plVar12 = (long *)thunk_FUN_03f99350(plVar10,DAT_091869b8);
    if (plVar12 == (long *)0x0) {
      return plVar10;
    }
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == DAT_091869b8) {
          puVar11 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_076b54ec;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(plVar12,DAT_091869b8,0);
LAB_076b54ec:
                    /* WARNING: Could not recover jumptable at 0x076b5508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar10 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
    return plVar10;
  }
  if (*(char *)(param_4 + 200) == '\0') {
    if (*(char *)(param_4 + 0xf0) == '\0') {
      lVar8 = *(long *)(param_4 + 0x108);
      if (lVar8 == 0) {
        lVar8 = Newtonsoft_Json_Serialization_JsonArrayContract__get_ParameterizedCreator(param_4);
      }
      auVar19 = FUN_03f5c394(DAT_09180318,1);
      plVar12 = auVar19._0_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar19._8_8_;
      auVar19 = auVar4 << 0x40;
      if (plVar12 != (long *)0x0) {
        if ((plVar10 != (long *)0x0) &&
           (lVar13 = thunk_FUN_03f99350(plVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
          uVar14 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar14,0);
        }
        if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar12[4] = (long)plVar10;
        auVar19 = thunk_FUN_03f5d7b8(plVar12 + 4,plVar10);
        if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x076b54dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar10 = (long *)(**(code **)(lVar8 + 0x18))
                                      (*(undefined8 *)(lVar8 + 0x40),plVar12,
                                       *(undefined8 *)(lVar8 + 0x28));
          return plVar10;
        }
      }
    }
    else if (plVar10 != (long *)0x0) {
      lVar8 = *plVar10;
      uVar14 = *(undefined8 *)(param_4 + 0xc0);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == DAT_091857d8) {
            puVar11 = (undefined8 *)(lVar8 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_076b551c;
          }
          uVar9 = uVar9 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091857d8,1);
LAB_076b551c:
      uVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      plVar12 = (long *)System_Array__CreateInstance(uVar14,uVar7,0);
      lVar8 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == DAT_091857d8) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_076b5588;
          }
          uVar9 = uVar9 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091857d8,0);
LAB_076b5588:
      (*(code *)*puVar11)(plVar10,plVar12,0,puVar11[1]);
      return plVar12;
    }
  }
  else {
    plVar12 = *(long **)(param_4 + 0x58);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = auVar19._8_8_;
    auVar19 = auVar3 << 0x40;
    if (plVar12 != (long *)0x0) {
      uVar14 = *(undefined8 *)(param_4 + 0xc0);
      uVar7 = (**(code **)(*plVar12 + 0x458))(plVar12,*(undefined8 *)(*plVar12 + 0x460));
      plVar10 = (long *)Newtonsoft_Json_Utilities_CollectionUtils__ToMultidimensionalArray
                                  (plVar10,uVar14,uVar7,0);
      return plVar10;
    }
  }
LAB_076b55b8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar19._0_8_,auVar19._8_8_);
}

