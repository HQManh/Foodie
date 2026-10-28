// rea decompile_all
// name: System.Resources.ManifestBasedResourceGroveler$$HandleSatelliteMissing
// address: 0x74d6498
// body: available
// range: 0x74d6498-0x74d680b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d6724 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d6728 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d6808 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Resources_ManifestBasedResourceGroveler__HandleSatelliteMissing(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  
  if ((DAT_09521563 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181610);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_09225918);
    FUN_03f5c2a4(&DAT_091f93b8);
    FUN_03f5c2a4(&DAT_091f87e0);
    DAT_09521563 = 1;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar1 = System_Resources_ResourceManager_ResourceManagerMediator__get_MainAssembly(),
     lVar1 == 0)) goto LAB_074d6724;
  uVar2 = System_Reflection_Assembly__GetSimpleName(lVar1,0);
  uVar2 = System_String__Concat(uVar2,DAT_091f93b8,0);
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar1 == 0)) goto LAB_074d6724;
  uVar3 = System_Version__op_Inequality(*(undefined8 *)(lVar1 + 0x60),0,0);
  if ((uVar3 & 1) != 0) {
    if (((*(long *)(param_1 + 0x10) == 0) ||
        (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar1 == 0)) ||
       (plVar4 = *(long **)(lVar1 + 0x60), plVar4 == (long *)0x0)) goto LAB_074d6724;
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar2 = System_String__Concat(uVar2,DAT_091f87e0,uVar5,0);
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09181610);
  System_Reflection_AssemblyName___ctor(lVar1,0);
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (lVar6 = System_Resources_ResourceManager_ResourceManagerMediator__get_MainAssembly(),
      lVar6 == 0)) || (uVar5 = System_Reflection_Assembly__GetPublicKey(lVar6,0), lVar1 == 0))
  goto LAB_074d6724;
  System_Reflection_AssemblyName__SetPublicKey(lVar1,uVar5,0);
  lVar1 = System_Reflection_AssemblyName__GetPublicKeyToken(lVar1,0);
  if (lVar1 == 0) goto LAB_074d6724;
  uVar3 = *(ulong *)(lVar1 + 0x18);
  plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  iVar9 = (int)uVar3;
  System_Text_StringBuilder___ctor(plVar4,iVar9 << 1,0);
  if (iVar9 < 1) {
    if (plVar4 != (long *)0x0) goto LAB_074d66c0;
    uVar5 = thunk_FUN_03fc39d4(&DAT_091f8778);
    uVar7 = 0;
  }
  else {
    uVar8 = 0;
    do {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(uint *)(lVar1 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar5 = System_Byte__ToString(lVar1 + 0x20 + uVar8,DAT_09225918,uVar5,0);
      if (plVar4 == (long *)0x0) goto LAB_074d6724;
      System_Text_StringBuilder__Append(plVar4,uVar5,0);
      uVar8 = uVar8 + 1;
    } while ((uVar3 & 0xffffffff) != uVar8);
LAB_074d66c0:
    uVar5 = thunk_FUN_03fc39d4(&DAT_091f8778);
    uVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  }
  uVar2 = System_String__Concat(uVar2,uVar5,uVar7,0);
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar1 != 0)) &&
     ((plVar4 = *(long **)(lVar1 + 0x48), plVar4 != (long *)0x0 &&
      (lVar1 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0)), lVar1 != 0))
     )) {
    if (*(int *)(lVar1 + 0x10) == 0) {
      lVar1 = thunk_FUN_03fc39d4(&DAT_091fab80);
    }
    uVar5 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar5 = FUN_03f5c394(uVar5,2);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    FUN_039b1d98(uVar7);
    uVar7 = System_Resources_ResourceManager_ResourceManagerMediator__get_NeutralResourcesCulture
                      (uVar7);
    FUN_039b1d98(uVar5);
    FUN_039b0da0(uVar5,uVar7);
    FUN_039af17c(uVar5,0,uVar7);
    FUN_039b0da0(uVar5,uVar2);
    FUN_039af17c(uVar5,1,uVar2);
    uVar2 = thunk_FUN_03fc39d4(&DAT_0920fd98);
    uVar2 = System_Environment__GetResourceString(uVar2,uVar5,0);
    thunk_FUN_03fc39d4(&DAT_091882e8);
    uVar5 = thunk_FUN_03f9944c();
    System_Resources_MissingSatelliteAssemblyException___ctor(uVar5,uVar2,lVar1);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091d28b0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar2);
  }
LAB_074d6724:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

