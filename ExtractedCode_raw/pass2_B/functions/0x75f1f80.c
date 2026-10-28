// rea decompile_all
// name: System.RuntimeType$$GetFieldCandidates
// address: 0x75f1f80
// body: available
// range: 0x75f1f80-0x75f214f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f2148 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f214c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_RuntimeType__GetFieldCandidates
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_74;
  char local_70 [4];
  char local_6c [4];
  undefined8 local_68;
  
  local_68 = param_3;
  if ((DAT_09521f3d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aa230);
    FUN_03f5c2a4(&DAT_091aa228);
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521f3d = 1;
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
  System_RuntimeType__FilterHelper(param_4,&local_68,param_5 & 1,local_6c,local_70,&local_74);
  lVar6 = System_RuntimeType__GetFields_internal(param_2,local_68,param_4,local_74,param_2);
  if (lVar6 != 0) {
    FUN_05639958(&local_90,*(undefined4 *)(lVar6 + 0x18),DAT_091aa228);
    cVar2 = local_6c[0];
    cVar1 = local_70[0];
    uVar4 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar4) {
      lVar9 = 0;
      do {
        if (uVar4 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar8 = *(long *)(lVar6 + 0x20 + lVar9 * 8);
        if (lVar8 == 0) goto LAB_075f2148;
        uVar4 = System_Reflection_RuntimeFieldInfo__get_BindingFlags(lVar8,0);
        uVar5 = System_Reflection_RuntimeFieldInfo__get_BindingFlags(lVar8,0);
        uVar3 = local_68;
        if ((uVar4 & (param_4 ^ 2)) == uVar5) {
          if (cVar2 != '\0') {
            if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = System_RuntimeType__FilterApplyPrefixLookup(lVar8,uVar3,cVar1 != '\0');
            if ((uVar7 & 1) == 0) goto LAB_075f2108;
          }
          FUN_05639b84(&local_90,lVar8,DAT_091aa230);
        }
LAB_075f2108:
        uVar4 = *(uint *)(lVar6 + 0x18);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar4);
    }
    param_1[1] = uStack_88;
    *param_1 = local_90;
    param_1[2] = local_80;
    return;
  }
LAB_075f2148:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

