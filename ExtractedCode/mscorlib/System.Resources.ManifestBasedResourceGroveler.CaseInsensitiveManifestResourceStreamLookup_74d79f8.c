// rea decompile_all
// name: System.Resources.ManifestBasedResourceGroveler$$CaseInsensitiveManifestResourceStreamLookup
// address: 0x74d79f8
// body: available
// range: 0x74d79f8-0x74d7d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d7ca4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d7ca8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d7d68 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Resources_ManifestBasedResourceGroveler__CaseInsensitiveManifestResourceStreamLookup
          (long param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 local_54;
  
  if ((DAT_09521560 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09521560 = 1;
  }
  local_54 = 0;
  plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar4,0);
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar7 == 0)) goto LAB_074d7ca4;
  uVar11 = *(undefined8 *)(lVar7 + 0x38);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_Type__op_Inequality(uVar11,0,0);
  if ((uVar5 & 1) == 0) {
LAB_074d7b18:
    if (plVar4 == (long *)0x0) goto LAB_074d7ca4;
  }
  else {
    if (((*(long *)(param_1 + 0x10) == 0) ||
        (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar7 == 0)) ||
       (plVar6 = *(long **)(lVar7 + 0x38), plVar6 == (long *)0x0)) goto LAB_074d7ca4;
    lVar7 = (**(code **)(*plVar6 + 0x2d8))(plVar6,*(undefined8 *)(*plVar6 + 0x2e0));
    if (lVar7 == 0) goto LAB_074d7b18;
    if (plVar4 == (long *)0x0) goto LAB_074d7ca4;
    System_Text_StringBuilder__Append(plVar4,lVar7,0);
    if (param_3 != 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Text_StringBuilder__Append
                (plVar4,*(undefined2 *)(*(long *)(DAT_095354b8 + 0xb8) + 8),0);
    }
  }
  System_Text_StringBuilder__Append(plVar4,param_3,0);
  uVar11 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182ff8);
  }
  plVar4 = (long *)System_Globalization_CultureInfo__get_InvariantCulture(0);
  if (((plVar4 == (long *)0x0) ||
      (plVar4 = (long *)(**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210)),
      param_2 == (long *)0x0)) ||
     (lVar7 = (**(code **)(*param_2 + 0x2c8))(param_2,*(undefined8 *)(*param_2 + 0x2d0)), lVar7 == 0
     )) goto LAB_074d7ca4;
  if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
    lVar12 = 0;
    uVar5 = 0;
    uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
    do {
      if (uVar8 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (plVar4 == (long *)0x0) goto LAB_074d7ca4;
      lVar10 = *(long *)(lVar7 + 0x20 + uVar5 * 8);
      iVar2 = (**(code **)(*plVar4 + 0x1a8))
                        (plVar4,lVar10,uVar11,1,*(undefined8 *)(*plVar4 + 0x1b0));
      if ((iVar2 == 0) && (bVar1 = lVar12 != 0, lVar12 = lVar10, bVar1)) {
        uVar9 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar9 = FUN_03f5c394(uVar9,2);
        FUN_039b1d98();
        FUN_039b0da0(uVar9,uVar11);
        FUN_039af17c(uVar9,0,uVar11);
        FUN_039b1d98(param_2);
        uVar11 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
        FUN_039b0da0(uVar9,uVar11);
        FUN_039af17c(uVar9,1,uVar11);
        uVar11 = thunk_FUN_03fc39d4(&DAT_091faf00);
        uVar11 = System_Environment__GetResourceString(uVar11,uVar9,0);
        thunk_FUN_03fc39d4(&DAT_091882b8);
        uVar9 = thunk_FUN_03f9944c();
        System_Resources_MissingManifestResourceException___ctor(uVar9,uVar11);
        uVar11 = thunk_FUN_03fc39d4(&DAT_091d2890);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar9,uVar11);
      }
      uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)*(uint *)(lVar7 + 0x18));
    if (lVar12 != 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar11 = System_Resources_ResourceManager_ResourceManagerMediator__get_MainAssembly();
        uVar5 = System_Reflection_Assembly__op_Equality(uVar11,param_2,0);
        if ((uVar5 & 1) == 0) {
          uVar3 = 0;
        }
        else {
          if ((*(long *)(param_1 + 0x10) == 0) ||
             (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar7 == 0)) goto LAB_074d7ca4;
          uVar9 = *(undefined8 *)(lVar7 + 0x78);
          uVar11 = System_Resources_ResourceManager_ResourceManagerMediator__get_MainAssembly();
          uVar3 = System_Reflection_Assembly__op_Equality(uVar9,uVar11,0);
        }
        local_54 = 1;
        uVar11 = System_Reflection_Assembly__GetManifestResourceStream
                           (param_2,lVar12,&local_54,uVar3 & 1,0);
        return uVar11;
      }
LAB_074d7ca4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return 0;
}

