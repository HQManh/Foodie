// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$CreateDictionaryContract
// address: 0x76a6acc
// body: available
// range: 0x76a6acc-0x76a702b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a6f98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a7018 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a701c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a7028 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Serialization_DefaultContractResolver__CreateDictionaryContract
               (long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  
  if ((DAT_0952262f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_091790b8);
    FUN_03f5c2a4(&DAT_09171b90);
    FUN_03f5c2a4(&DAT_09171bc0);
    FUN_03f5c2a4(&DAT_09187338);
    FUN_03f5c2a4(&DAT_091d1d38);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_091721e8);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091e8d68);
    FUN_03f5c2a4(&DAT_09190038);
    DAT_0952262f = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09187338);
  Newtonsoft_Json_Serialization_JsonDictionaryContract___ctor(lVar1,param_2);
  Newtonsoft_Json_Serialization_DefaultContractResolver__InitializeContract(param_1,lVar1);
  if (*(int *)(DAT_09187480 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = FUN_04bdd05c(param_2,DAT_091d1d38);
  if (lVar2 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(lVar2 + 0x58);
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__op_Inequality(uVar13,0,0);
  if ((uVar3 & 1) == 0) {
    uVar13 = thunk_FUN_03f9944c(DAT_091790b8);
    if (param_1 == (long *)0x0) goto LAB_076a6f98;
    uVar10 = *(undefined8 *)(*param_1 + 0x2d0);
  }
  else {
    param_1 = (long *)thunk_FUN_03f9944c(DAT_09190038);
    System_Object___ctor(param_1,0);
    if (*(int *)(DAT_09187480 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = Newtonsoft_Json_Serialization_JsonTypeReflector__GetContainerNamingStrategy(lVar2,0);
    if (param_1 == (long *)0x0) goto LAB_076a6f98;
    param_1[2] = lVar2;
    thunk_FUN_03f5d7b8();
    uVar13 = thunk_FUN_03f9944c(DAT_091790b8);
    uVar10 = DAT_091e8d68;
  }
  FUN_05324070(uVar13,param_1,uVar10,0);
  if (lVar1 == 0) goto LAB_076a6f98;
  *(undefined8 *)(lVar1 + 0xc0) = uVar13;
  uVar13 = thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xc0),uVar13);
  plVar4 = (long *)Newtonsoft_Json_Serialization_DefaultContractResolver__GetAttributeConstructor
                             (uVar13,*(undefined8 *)(lVar1 + 0x18));
  if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182ac0);
  }
  uVar3 = System_Reflection_ConstructorInfo__op_Inequality(plVar4,0,0);
  if ((uVar3 & 1) == 0) {
    return lVar1;
  }
  if (plVar4 == (long *)0x0) goto LAB_076a6f98;
  lVar2 = (**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(*plVar4 + 0x260));
  uVar13 = *(undefined8 *)(lVar1 + 200);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar3 = System_Type__op_Inequality(uVar13,0,0);
  if ((uVar3 & 1) == 0) {
LAB_076a6ec4:
    uVar13 = DAT_09171b90;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar5 = (long *)System_Type__GetTypeFromHandle(uVar13,0);
  }
  else {
    uVar13 = *(undefined8 *)(lVar1 + 0xd0);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__op_Inequality(uVar13,0,0);
    uVar13 = DAT_09171bc0;
    if ((uVar3 & 1) == 0) goto LAB_076a6ec4;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar5 = (long *)System_Type__GetTypeFromHandle(uVar13,0);
    plVar6 = (long *)FUN_03f5c394(DAT_09180748,1);
    plVar7 = (long *)System_Type__GetTypeFromHandle(DAT_091721e8,0);
    plVar8 = (long *)FUN_03f5c394(DAT_09180748,2);
    if (plVar8 == (long *)0x0) goto LAB_076a6f98;
    lVar14 = *(long *)(lVar1 + 200);
    if ((lVar14 != 0) &&
       (lVar9 = thunk_FUN_03f99350(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_076a7020:
      uVar13 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar13,0);
    }
    if ((int)plVar8[3] == 0) {
LAB_076a701c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar8[4] = lVar14;
    thunk_FUN_03f5d7b8(plVar8 + 4,lVar14);
    lVar14 = *(long *)(lVar1 + 0xd0);
    if ((lVar14 != 0) &&
       (lVar9 = thunk_FUN_03f99350(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
    goto LAB_076a7020;
    if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) goto LAB_076a701c;
    plVar8[5] = lVar14;
    thunk_FUN_03f5d7b8(plVar8 + 5,lVar14);
    if ((plVar7 == (long *)0x0) ||
       (lVar14 = (**(code **)(*plVar7 + 0x948))(plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x950)),
       plVar6 == (long *)0x0)) goto LAB_076a6f98;
    if ((lVar14 != 0) &&
       (lVar9 = thunk_FUN_03f99350(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
    goto LAB_076a7020;
    if ((int)plVar6[3] == 0) goto LAB_076a701c;
    plVar6[4] = lVar14;
    thunk_FUN_03f5d7b8(plVar6 + 4,lVar14);
    if (plVar5 == (long *)0x0) goto LAB_076a6f98;
    plVar5 = (long *)(**(code **)(*plVar5 + 0x948))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x950));
  }
  if (lVar2 != 0) {
    uVar11 = 0;
    if (*(long *)(lVar2 + 0x18) != 0) {
      if ((int)*(long *)(lVar2 + 0x18) != 1) {
LAB_076a6f9c:
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar13 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        FUN_039b1d98(lVar1);
        uVar12 = *(undefined8 *)(lVar1 + 0x60);
        uVar10 = thunk_FUN_03fc39d4(&DAT_091fef60);
        uVar13 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar10,uVar13,uVar12,plVar5);
        thunk_FUN_03fc39d4(&DAT_09187348);
        uVar10 = thunk_FUN_03f9944c();
        Newtonsoft_Json_JsonException___ctor(uVar10,uVar13,0);
        uVar13 = thunk_FUN_03fc39d4(&DAT_091c8290);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar10,uVar13);
      }
      plVar6 = *(long **)(lVar2 + 0x20);
      if ((plVar6 == (long *)0x0) ||
         (uVar13 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0)),
         plVar5 == (long *)0x0)) goto LAB_076a6f98;
      uVar3 = (**(code **)(*plVar5 + 0x2b8))(plVar5,uVar13,*(undefined8 *)(*plVar5 + 0x2c0));
      if ((uVar3 & 1) == 0) goto LAB_076a6f9c;
      uVar11 = 1;
    }
    lVar2 = DAT_09187480;
    *(undefined1 *)(lVar1 + 0x120) = uVar11;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar5 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                               (0);
    if (plVar5 != (long *)0x0) {
      uVar13 = (**(code **)(*plVar5 + 0x188))(plVar5,plVar4,*(undefined8 *)(*plVar5 + 400));
      *(undefined8 *)(lVar1 + 0x110) = uVar13;
      thunk_FUN_03f5d7b8(lVar1 + 0x110,uVar13);
      return lVar1;
    }
  }
LAB_076a6f98:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

