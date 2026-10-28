// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$Populate
// address: 0x76b1080
// body: available
// range: 0x76b1080-0x76b15af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b13e8 to 0x76b2540 Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76b1434 to 0x76b15b0 Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateList (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76b147c to 0x76b1b08 Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateDictionary (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76b1494 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b149c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b154c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b15ac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__Populate
               (long param_1,long *param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong extraout_x1;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined4 local_34;
  
  if ((DAT_095226a4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185890);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09185f80);
    FUN_03f5c2a4(&DAT_091872e0);
    FUN_03f5c2a4(&DAT_09187338);
    FUN_03f5c2a4(&DAT_09187388);
    FUN_03f5c2a4(&DAT_09223c10);
    FUN_03f5c2a4(&DAT_091f71a8);
    DAT_095226a4 = 1;
  }
  auVar14 = Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09223c10);
  if (param_3 == 0) goto LAB_076b1494;
  auVar14 = System_Object__GetType(param_3,0);
  uVar9 = auVar14._0_8_;
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (plVar13 = *(long **)(*(long *)(param_1 + 0x20) + 0x40), plVar13 == (long *)0x0))
  goto LAB_076b1494;
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == DAT_09185890) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_076b119c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185890,0);
LAB_076b119c:
  auVar14 = (*(code *)*puVar4)(plVar13,uVar9,puVar4[1]);
  plVar13 = auVar14._0_8_;
  if (param_2 == (long *)0x0) goto LAB_076b1494;
  uVar11 = Newtonsoft_Json_JsonReader__MoveToContent(param_2,0);
  if ((uVar11 & 1) == 0) {
    uVar9 = thunk_FUN_03fc39d4(&DAT_092088d8);
    goto LAB_076b1584;
  }
  auVar14 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  uVar6 = DAT_09185f80;
  if (auVar14._0_4_ == 2) {
    if (plVar13 == (long *)0x0) goto LAB_076b1494;
    if (*(int *)((long)plVar13 + 0x24) == 2) {
      if ((*(byte *)(DAT_091872e0 + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_091872e0 + 0x130) * 8 + -8) ==
          DAT_091872e0)) {
        if (*(char *)((long)plVar13 + 0xf1) == '\0') {
          lVar10 = thunk_FUN_03f99350(param_3,DAT_09185f80);
          if (lVar10 == 0) goto LAB_076b1544;
        }
        else {
          lVar10 = Newtonsoft_Json_Serialization_JsonArrayContract__CreateWrapper(plVar13,param_3);
        }
        auVar14._8_8_ = lVar10;
        auVar14._0_8_ = lVar10;
        if (param_1 != 0) {
          Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateList
                    (param_1,lVar10,param_2,plVar13,0,0);
          return;
        }
        goto LAB_076b1494;
      }
      goto LAB_076b1498;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    puVar7 = &DAT_091fe070;
LAB_076b1574:
    uVar8 = thunk_FUN_03fc39d4(puVar7);
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (iVar3 == 1) {
      Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
      plVar5 = *(long **)(param_1 + 0x20);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = extraout_x1;
      auVar14 = auVar1 << 0x40;
      if (plVar5 == (long *)0x0) goto LAB_076b1494;
      auVar14 = (**(code **)(*plVar5 + 0x378))(plVar5,*(undefined8 *)(*plVar5 + 0x380));
      if ((auVar14._0_4_ == 2) ||
         (auVar14 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240)),
         auVar14._0_4_ != 4)) {
LAB_076b1324:
        uVar8 = 0;
      }
      else {
        auVar14 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        plVar5 = auVar14._0_8_;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = auVar14._8_8_;
        auVar14 = auVar2 << 0x40;
        if (plVar5 == (long *)0x0) goto LAB_076b1494;
        uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        auVar14 = System_String__Equals(uVar6,DAT_091f71a8,4,0);
        if ((auVar14._0_8_ & 1) == 0) goto LAB_076b1324;
        Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
        plVar5 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar5 == (long *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        }
        auVar14 = Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
      }
      uVar6 = DAT_09185a20;
      if (plVar13 == (long *)0x0) {
LAB_076b1494:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(auVar14._0_8_,auVar14._8_8_);
      }
      if (*(int *)((long)plVar13 + 0x24) == 1) {
        if ((*(byte *)(DAT_09187388 + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_09187388 + 0x130) * 8 + -8)
            == DAT_09187388)) {
          Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateObject
                    (param_1,param_3,param_2,plVar13,0,uVar8);
          return;
        }
LAB_076b1498:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar13);
      }
      if (*(int *)((long)plVar13 + 0x24) == 5) {
        if ((*(byte *)(DAT_09187338 + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_09187338 + 0x130) * 8 + -8)
            == DAT_09187338)) {
          if ((char)plVar13[0x20] == '\0') {
            lVar10 = thunk_FUN_03f99350(param_3,DAT_09185a20);
            if (lVar10 == 0) {
LAB_076b1544:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(param_3,uVar6);
            }
          }
          else {
            lVar10 = Newtonsoft_Json_Serialization_JsonDictionaryContract__CreateWrapper
                               (plVar13,param_3);
          }
          Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateDictionary
                    (param_1,lVar10,param_2,plVar13,0,uVar8);
          return;
        }
        goto LAB_076b1498;
      }
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      puVar7 = &DAT_091fe078;
      goto LAB_076b1574;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    FUN_039b1d98(param_2);
    local_34 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    uVar9 = thunk_FUN_03fc39d4(&DAT_09187478);
    uVar9 = FUN_03f5c42c(uVar9,&local_34);
    uVar8 = thunk_FUN_03fc39d4(&DAT_09211da0);
  }
  uVar9 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar6,uVar9);
LAB_076b1584:
  uVar9 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar9,0);
  uVar6 = thunk_FUN_03fc39d4(&DAT_091d1b48);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar9,uVar6);
}

