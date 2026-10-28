// rea decompile_all
// name: Newtonsoft.Json.Converters.DiscriminatedUnionConverter$$ReadJson
// address: 0x7706540
// body: available
// range: 0x7706540-0x7706bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7706a44 to 0x7692d30 Newtonsoft.Json.Utilities.FSharpFunction$$Invoke (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7706a48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7706a4c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7706a54 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7706b08 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7706b14 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Converters_DiscriminatedUnionConverter__ReadJson
          (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          )

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  
  if ((DAT_09522962 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183ba8);
    FUN_03f5c2a4(&DAT_091caaa8);
    FUN_03f5c2a4(&DAT_09179458);
    FUN_03f5c2a4(&DAT_09187200);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091bd430);
    FUN_03f5c2a4(&DAT_091e8e60);
    FUN_03f5c2a4(&DAT_09190168);
    FUN_03f5c2a4(&DAT_091fe6b0);
    FUN_03f5c2a4(&DAT_09202958);
    DAT_09522962 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09190168);
  System_Object___ctor(lVar2,0);
  if (param_2 == (long *)0x0) {
LAB_07706a48:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar1 == 0xb) {
    return 0;
  }
  if (lVar2 == 0) goto LAB_07706a48;
  puVar14 = (undefined8 *)(lVar2 + 0x10);
  *puVar14 = 0;
  thunk_FUN_03f5d7b8(puVar14,0);
  Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
  iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar1 == 4) {
    lVar13 = 0;
    plVar12 = (long *)0x0;
    do {
      plVar3 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      if (plVar3 == (long *)0x0) goto LAB_07706a48;
      uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      uVar5 = System_String__Equals(uVar4,DAT_091fe6b0,5,0);
      if ((uVar5 & 1) == 0) {
        uVar5 = System_String__Equals(uVar4,DAT_09202958,5,0);
        if ((uVar5 & 1) == 0) {
          thunk_FUN_03fc39d4(&DAT_09182ff8);
          FUN_039afb80();
          uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar9 = thunk_FUN_03fc39d4(&DAT_09211e00);
          goto LAB_07706ac8;
        }
        Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
        iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        if (iVar1 != 2) {
          uVar4 = thunk_FUN_03fc39d4(&DAT_09212070);
          goto LAB_07706ae0;
        }
        if (*(int *)(DAT_09187250 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar12 = (long *)Newtonsoft_Json_Linq_JToken__ReadFrom(param_2,0);
        if (plVar12 != (long *)0x0) {
          if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(DAT_09187200 + 0x130)) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(DAT_09187200 + 0x130) * 8 + -8)
              != DAT_09187200)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar12);
          }
        }
      }
      else {
        Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
        if (*(int *)(DAT_09183ba8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_09183ba8 + 0xb8) == 0) goto LAB_07706a48;
        lVar13 = FUN_06361088(**(long **)(DAT_09183ba8 + 0xb8),param_3,DAT_091bd430);
        plVar3 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar3 == (long *)0x0) goto LAB_07706a48;
        uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        *puVar14 = uVar4;
        thunk_FUN_03f5d7b8(puVar14,uVar4);
        if (lVar13 == 0) goto LAB_07706a48;
        lVar15 = *(long *)(lVar2 + 0x18);
        uVar4 = *(undefined8 *)(lVar13 + 0x18);
        if (lVar15 == 0) {
          lVar15 = thunk_FUN_03f9944c(DAT_09179458);
          FUN_05322d94(lVar15,lVar2,DAT_091e8e60,0);
          *(long *)(lVar2 + 0x18) = lVar15;
          thunk_FUN_03f5d7b8(lVar2 + 0x18,lVar15);
        }
        lVar13 = FUN_04b01688(uVar4,lVar15,DAT_091caaa8);
        if (lVar13 == 0) {
          thunk_FUN_03fc39d4(&DAT_09182ff8);
          FUN_039afb80();
          uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          FUN_039b1d98(lVar2);
          uVar4 = *(undefined8 *)(lVar2 + 0x10);
          puVar8 = &DAT_09208cd0;
          goto LAB_07706abc;
        }
      }
      Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
      iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    } while (iVar1 == 4);
    if (lVar13 == 0) goto LAB_07706b18;
    if (*(long *)(lVar13 + 0x20) == 0) goto LAB_07706a48;
    plVar3 = (long *)FUN_03f5c394(DAT_09180318,*(undefined4 *)(*(long *)(lVar13 + 0x20) + 0x18));
    lVar15 = *(long *)(lVar13 + 0x20);
    if (lVar15 == 0) goto LAB_07706a48;
    if ((*(long *)(lVar15 + 0x18) == 0) || (plVar12 != (long *)0x0)) {
      if (plVar12 != (long *)0x0) {
        iVar1 = Newtonsoft_Json_Linq_JContainer__get_Count(plVar12,0);
        if (iVar1 != *(int *)(lVar15 + 0x18)) {
          thunk_FUN_03fc39d4(&DAT_09182ff8);
          FUN_039afb80();
          uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          FUN_039b1d98(lVar2);
          uVar4 = *(undefined8 *)(lVar2 + 0x10);
          puVar8 = &DAT_0920f990;
LAB_07706abc:
          uVar9 = thunk_FUN_03fc39d4(puVar8);
          goto LAB_07706ac8;
        }
        iVar1 = Newtonsoft_Json_Linq_JContainer__get_Count(plVar12,0);
        if (0 < iVar1) {
          uVar11 = 0;
          lVar2 = 0x20;
          do {
            lVar15 = Newtonsoft_Json_Linq_JArray__get_Item(plVar12,uVar11,0);
            lVar10 = *(long *)(lVar13 + 0x20);
            if (lVar10 == 0) goto LAB_07706a48;
            if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_07706a4c;
            plVar6 = *(long **)(lVar10 + lVar2);
            if (plVar6 == (long *)0x0) goto LAB_07706a48;
            uVar4 = (**(code **)(*plVar6 + 600))(plVar6,*(undefined8 *)(*plVar6 + 0x260));
            if ((lVar15 == 0) ||
               (lVar15 = Newtonsoft_Json_Linq_JToken__ToObject(lVar15,uVar4,param_5,0),
               plVar3 == (long *)0x0)) goto LAB_07706a48;
            if ((lVar15 != 0) &&
               (lVar10 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar3 + 0x40)), lVar10 == 0))
            goto LAB_07706b0c;
            if (*(uint *)(plVar3 + 3) <= uVar11) goto LAB_07706a4c;
            *(long *)((long)plVar3 + lVar2) = lVar15;
            thunk_FUN_03f5d7b8((long)plVar3 + lVar2,lVar15);
            uVar11 = uVar11 + 1;
            iVar1 = Newtonsoft_Json_Linq_JContainer__get_Count(plVar12,0);
            lVar2 = lVar2 + 8;
          } while ((int)uVar11 < iVar1);
        }
      }
      plVar12 = (long *)FUN_03f5c394(DAT_09180318,1);
      if (plVar12 != (long *)0x0) {
        if ((plVar3 != (long *)0x0) &&
           (lVar2 = thunk_FUN_03f99350(plVar3,*(undefined8 *)(*plVar12 + 0x40)), lVar2 == 0)) {
LAB_07706b0c:
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if ((int)plVar12[3] == 0) {
LAB_07706a4c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar12[4] = (long)plVar3;
        thunk_FUN_03f5d7b8(plVar12 + 4,plVar3);
        if (*(long *)(lVar13 + 0x30) != 0) {
          uVar4 = Newtonsoft_Json_Utilities_FSharpFunction__Invoke
                            (*(long *)(lVar13 + 0x30),plVar12,0);
          return uVar4;
        }
      }
      goto LAB_07706a48;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_09208880);
    puVar14 = &DAT_09202958;
  }
  else {
LAB_07706b18:
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_09208888);
    puVar14 = &DAT_091fe6b0;
  }
  uVar4 = thunk_FUN_03fc39d4(puVar14);
LAB_07706ac8:
  uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar7,uVar4,0);
LAB_07706ae0:
  uVar4 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar4,0);
  uVar7 = thunk_FUN_03fc39d4(&DAT_091c8648);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar7);
}

