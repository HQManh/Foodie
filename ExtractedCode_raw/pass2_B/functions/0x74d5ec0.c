// rea decompile_all
// name: System.Resources.ManifestBasedResourceGroveler$$GrovelForResourceSet
// address: 0x74d5ec0
// body: available
// range: 0x74d5ec0-0x74d6127 inclusive
// range: 0x74d6130-0x74d615b inclusive
// range: 0x74d6160-0x74d616f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d6104 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d610c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d6110 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d6114 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d616c to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Resources_ManifestBasedResourceGroveler__GrovelForResourceSet
                (long param_1,long *param_2,long param_3,ulong param_4,uint param_5,
                undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  int iVar10;
  undefined1 auVar11 [12];
  long local_80;
  char *local_78;
  long *local_70;
  char local_64 [4];
  long local_60;
  ulong local_58;
  
  if ((DAT_0952155c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fdb0);
    DAT_0952155c = 1;
  }
  local_60 = 0;
  local_58 = 0;
  local_64[0] = '\0';
  lVar2 = System_Resources_ManifestBasedResourceGroveler__UltimateFallbackFixup(param_1,param_2);
  uVar3 = 0;
  if (lVar2 == 0) goto LAB_074d6104;
  uVar3 = System_Globalization_CultureInfo__get_HasInvariantCultureName(lVar2,0);
  if ((uVar3 & 1) == 0) {
LAB_074d5f50:
    uVar4 = System_Resources_ManifestBasedResourceGroveler__GetSatelliteAssembly
                      (param_1,lVar2,param_6);
    uVar3 = System_Reflection_Assembly__op_Equality(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (param_2 == (long *)0x0) goto LAB_074d6104;
      uVar3 = System_Globalization_CultureInfo__get_HasInvariantCultureName(param_2,0);
      if ((uVar3 & 1) != 0) {
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar8 == 0)) goto LAB_074d6104;
        if (*(int *)(lVar8 + 0x5c) == 1) {
          System_Resources_ManifestBasedResourceGroveler__HandleSatelliteMissing(param_1);
          goto LAB_074d5fac;
        }
      }
    }
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x10);
    if ((uVar3 == 0) || (*(long *)(uVar3 + 0x10) == 0)) goto LAB_074d6104;
    if (*(int *)(*(long *)(uVar3 + 0x10) + 0x5c) != 0) goto LAB_074d5f50;
LAB_074d5fac:
    uVar3 = System_Resources_ResourceManager_ResourceManagerMediator__get_MainAssembly();
    uVar4 = uVar3;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x10);
    uVar3 = 0;
    if (plVar5 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x188))(plVar5,lVar2,*(undefined8 *)(*plVar5 + 400));
      uVar3 = System_Reflection_Assembly__op_Inequality(uVar4,0,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = 0;
        bVar1 = true;
        goto LAB_074d60c8;
      }
      local_78 = local_64;
      local_80 = 0;
      local_70 = &local_60;
      local_64[0] = '\0';
      local_60 = param_3;
      System_Threading_Monitor__Enter(param_3,local_64,0);
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar7 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar7,uVar7);
      }
      uVar3 = FUN_06fd9fbc(param_3,uVar7,&local_58,DAT_0919fdb0);
      lVar2 = 0;
      iVar10 = 7;
      pcVar9 = local_64;
      while( true ) {
        if (*pcVar9 != '\0') {
          uVar3 = System_Threading_Monitor__Exit(*local_70,0);
        }
        if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c548(lVar2);
        }
        if ((iVar10 != 7) && (iVar10 != 0)) {
          return uVar3;
        }
        lVar2 = System_Resources_ManifestBasedResourceGroveler__GetManifestResourceStream
                          (param_1,uVar4,uVar6,param_6);
        bVar1 = lVar2 == 0;
        uVar3 = local_58;
        if ((((param_5 & 1) != 0) && (lVar2 != 0)) && (local_58 == 0)) {
          uVar3 = System_Resources_ManifestBasedResourceGroveler__CreateResourceSet
                            (param_1,lVar2,uVar4);
          return uVar3;
        }
LAB_074d60c8:
        if (!bVar1) {
          return uVar3;
        }
        if ((param_4 & 1) == 0) {
          return uVar3;
        }
        if (param_2 == (long *)0x0) break;
        uVar3 = System_Globalization_CultureInfo__get_HasInvariantCultureName(param_2,0);
        if ((uVar3 & 1) == 0) {
          return local_58;
        }
        auVar11 = System_Resources_ManifestBasedResourceGroveler__HandleResourceStreamMissing
                            (param_1,uVar6);
        if (auVar11._8_4_ != 1) {
          FUN_039afeac(&local_80);
                    /* WARNING: Subroutine does not return */
          FUN_0404c2dc(auVar11._0_8_);
        }
        plVar5 = (long *)__cxa_begin_catch(auVar11._0_8_);
        lVar2 = *plVar5;
        local_80 = lVar2;
        uVar3 = __cxa_end_catch();
        iVar10 = 0;
        pcVar9 = local_78;
      }
    }
  }
LAB_074d6104:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar3);
}

