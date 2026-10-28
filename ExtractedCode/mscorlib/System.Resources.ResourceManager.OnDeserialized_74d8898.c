// rea decompile_all
// name: System.Resources.ResourceManager$$OnDeserialized
// address: 0x74d8898
// body: available
// range: 0x74d8898-0x74d8ac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d8a64 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d8ac4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Resources_ResourceManager__OnDeserialized(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  if ((DAT_09521568 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09193ee0);
    FUN_03f5c2a4(&DAT_0919fd98);
    FUN_03f5c2a4(&DAT_09176bf8);
    FUN_03f5c2a4(&DAT_09184550);
    FUN_03f5c2a4(&DAT_09187d78);
    FUN_03f5c2a4(&DAT_09193ee8);
    FUN_03f5c2a4(&DAT_0918a360);
    DAT_09521568 = 1;
  }
  uVar2 = thunk_FUN_03f9944c(DAT_09176bf8);
  FUN_06fd76bc(uVar2,DAT_0919fd98);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_09193ee0);
  System_Object___ctor(uVar2,0);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_09193ee8);
  System_Resources_ResourceManager_ResourceManagerMediator___ctor(uVar2,param_1);
  if (*(char *)(param_1 + 0x59) == '\0') {
    puVar6 = &DAT_09184550;
  }
  else {
    puVar6 = &DAT_09187d78;
  }
  lVar3 = thunk_FUN_03f9944c(*puVar6);
  System_Object___ctor(lVar3,0);
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  thunk_FUN_03f5d7b8(lVar3 + 0x10,uVar2);
  *(long *)(param_1 + 0x80) = lVar3;
  thunk_FUN_03f5d7b8(param_1 + 0x80,lVar3);
  plVar7 = (long *)(param_1 + 0x78);
  uVar4 = System_Reflection_Assembly__op_Equality(*plVar7,0,0);
  lVar3 = DAT_0918a360;
  if ((uVar4 & 1) != 0) {
    plVar5 = *(long **)(param_1 + 0x70);
    if (plVar5 == (long *)0x0) {
      *plVar7 = 0;
    }
    else {
      bVar1 = *(byte *)(DAT_0918a360 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != DAT_0918a360)) {
LAB_074d8a5c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar5,lVar3);
      }
      *plVar7 = (long)plVar5;
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar3)) goto LAB_074d8a5c;
    }
    thunk_FUN_03f5d7b8(plVar7);
  }
  if (*(char *)(param_1 + 0x59) != '\0') {
    if (*(long *)(param_1 + 0x48) == 0) {
      uVar2 = System_Resources_ManifestBasedResourceGroveler__GetNeutralResourcesLanguage
                        (*(undefined8 *)(param_1 + 0x30),param_1 + 0x5c);
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x48));
      return;
    }
  }
  return;
}

