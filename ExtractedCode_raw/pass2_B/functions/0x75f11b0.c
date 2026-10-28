// rea decompile_all
// name: System.RuntimeType$$GetConstructorCandidates
// address: 0x75f11b0
// body: available
// range: 0x75f11b0-0x75f142b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f1424 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f1428 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_RuntimeType__GetConstructorCandidates
               (undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,uint param_7)

{
  char cVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_74;
  char local_70 [4];
  char local_6c [4];
  long local_68;
  
  local_68 = param_3;
  if ((DAT_09521f3a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_091aa1d8);
    FUN_03f5c2a4(&DAT_091aa1d0);
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521f3a = 1;
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
  System_RuntimeType__FilterHelper(param_4,&local_68,param_7 & 1,local_6c,local_70,&local_74);
  cVar2 = local_6c[0];
  if (((local_6c[0] == '\0') && (local_68 != 0)) && (*(int *)(local_68 + 0x10) == 0)) {
LAB_075f1304:
    uVar7 = DAT_091aa1d0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_05639958(param_1,0,uVar7);
  }
  else {
    uVar4 = System_String__IsNullOrEmpty(local_68,0);
    lVar5 = local_68;
    if ((uVar4 & 1) == 0) {
      if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_String__op_Inequality(lVar5,**(undefined8 **)(DAT_09182ac0 + 0xb8),0);
      lVar5 = local_68;
      if ((uVar4 & 1) != 0) {
        if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_String__op_Inequality
                          (lVar5,*(undefined8 *)(*(long *)(DAT_09182ac0 + 0xb8) + 8),0);
        if ((uVar4 & 1) != 0) goto LAB_075f1304;
      }
    }
    lVar5 = System_RuntimeType__GetConstructors_internal(param_2,param_4,param_2);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_05639958(&local_90,*(undefined4 *)(lVar5 + 0x18),DAT_091aa1d0);
    cVar1 = local_70[0];
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar4 = 0;
      uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar7 = *(undefined8 *)(lVar5 + 0x20 + uVar4 * 8);
        if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System_RuntimeType__FilterApplyConstructorInfo(uVar7,param_4);
        lVar3 = local_68;
        if ((uVar6 & 1) != 0) {
          if (cVar2 != '\0') {
            if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = System_RuntimeType__FilterApplyPrefixLookup(uVar7,lVar3,cVar1 != '\0');
            if ((uVar6 & 1) == 0) goto LAB_075f13e0;
          }
          FUN_05639b84(&local_90,uVar7,DAT_091aa1d8);
        }
LAB_075f13e0:
        uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    param_1[1] = uStack_88;
    *param_1 = local_90;
    param_1[2] = local_80;
  }
  return;
}

