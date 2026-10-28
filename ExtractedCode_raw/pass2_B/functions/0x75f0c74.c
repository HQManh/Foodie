// rea decompile_all
// name: System.RuntimeType$$GetMethodCandidates
// address: 0x75f0c74
// body: available
// range: 0x75f0c74-0x75f0ecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f0ec4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f0ec8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_RuntimeType__GetMethodCandidates
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,int param_7,uint param_8)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_74;
  char local_70 [4];
  char local_6c [4];
  undefined8 local_68;
  
  local_68 = param_3;
  if ((DAT_09521f39 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aa258);
    FUN_03f5c2a4(&DAT_091aa250);
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521f39 = 1;
  }
  local_6c[0] = '\0';
  local_70[0] = '\0';
  local_74 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_RuntimeType__FilterHelper(param_4,&local_68,param_8 & 1,local_6c,local_70,&local_74);
  lVar5 = System_RuntimeType__GetMethodsByName(param_2,local_68,param_4,local_74,param_2);
  if (lVar5 != 0) {
    FUN_05639958(&local_90,*(undefined4 *)(lVar5 + 0x18),DAT_091aa250);
    cVar3 = local_6c[0];
    cVar2 = local_70[0];
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar9 = 0;
      uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar8 = *(long **)(lVar5 + 0x20 + uVar9 * 8);
        if (param_7 == -1) {
LAB_075f0dfc:
          if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System_RuntimeType__FilterApplyMethodInfo(plVar8,param_4,param_5,param_6);
          uVar4 = local_68;
          if ((uVar7 & 1) != 0) {
            if (cVar3 != '\0') {
              if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar7 = System_RuntimeType__FilterApplyPrefixLookup(plVar8,uVar4,cVar2 != '\0');
              if ((uVar7 & 1) == 0) goto LAB_075f0e80;
            }
            FUN_05639b84(&local_90,plVar8,DAT_091aa258);
          }
        }
        else {
          if (plVar8 == (long *)0x0) goto LAB_075f0ec8;
          uVar7 = (**(code **)(*plVar8 + 0x318))(plVar8,*(undefined8 *)(*plVar8 + 800));
          bVar1 = param_7 != 0;
          if ((uVar7 & 1) == 0) {
            bVar1 = param_7 < 1;
          }
          if (bVar1) {
            lVar6 = (**(code **)(*plVar8 + 0x338))(plVar8,*(undefined8 *)(*plVar8 + 0x340));
            if (lVar6 == 0) goto LAB_075f0ec8;
            if (*(int *)(lVar6 + 0x18) == param_7) goto LAB_075f0dfc;
          }
        }
LAB_075f0e80:
        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    param_1[1] = uStack_88;
    *param_1 = local_90;
    param_1[2] = local_80;
    return;
  }
LAB_075f0ec8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

