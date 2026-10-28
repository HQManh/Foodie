// rea decompile_all
// name: FUN_03f99a38
// address: 0x3f99a38
// body: available
// range: 0x3f99a38-0x3f99be3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f99be0 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_03f99a38(long param_1,long *param_2,long param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  void *__s;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  byte local_58 [8];
  ulong local_50;
  void *local_48;
  
  if (param_1 == 0) {
    __s = (void *)0x0;
  }
  else {
    *param_2 = 0;
    do {
      FUN_03f926f0(local_58,*(long *)(param_1 + 0x10) + 0x20,
                   *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18));
      uVar1 = *(ulong *)(param_3 + 8);
      if (uVar1 < *(ulong *)(param_3 + 0x10)) {
        FUN_03fa152c(param_3,local_58);
        lVar6 = uVar1 + 0x18;
      }
      else {
        lVar6 = FUN_03fa1584(param_3,local_58);
      }
      *(long *)(param_3 + 8) = lVar6;
      plVar5 = (long *)param_4[1];
      if (plVar5 < (long *)param_4[2]) {
        plVar8 = plVar5 + 1;
        *plVar5 = param_1;
        param_4[1] = (long)plVar8;
      }
      else {
        lVar6 = (long)plVar5 - *param_4 >> 3;
        uVar1 = lVar6 + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5fa4c(param_4);
        }
        uVar3 = param_4[2] - *param_4;
        uVar7 = (long)uVar3 >> 2;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar3) {
          uVar7 = 0x1fffffffffffffff;
        }
        if (uVar7 == 0) {
          auVar9 = ZEXT816(0);
        }
        else {
          auVar9 = FUN_03f695c0(param_4 + 2);
        }
        plVar5 = (long *)(auVar9._0_8_ + lVar6 * 8);
        plVar8 = plVar5 + 1;
        *plVar5 = param_1;
        plVar2 = (long *)*param_4;
        plVar4 = (long *)param_4[1];
        if (plVar4 != plVar2) {
          do {
            plVar4 = plVar4 + -1;
            plVar5 = plVar5 + -1;
            *plVar5 = *plVar4;
          } while (plVar4 != plVar2);
          plVar4 = (long *)*param_4;
        }
        *param_4 = (long)plVar5;
        param_4[1] = (long)plVar8;
        param_4[2] = auVar9._0_8_ + auVar9._8_8_ * 8;
        if (plVar4 != (long *)0x0) {
          operator_delete(plVar4);
        }
      }
      lVar6 = *(long *)(param_1 + 0x10);
      param_1 = *(long *)(param_1 + 0x18);
      param_4[1] = (long)plVar8;
      uVar7 = *(ulong *)(lVar6 + 0x18);
      uVar1 = (ulong)(local_58[0] >> 1);
      if ((local_58[0] & 1) != 0) {
        uVar1 = local_50;
      }
      if (uVar7 <= uVar1) {
        uVar7 = uVar1;
      }
      *param_2 = uVar7 + *param_2;
      if ((local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
    } while (param_1 != 0);
    __s = (void *)FUN_03f8a4c8(*param_2 + 1);
    memset(__s,0,*param_2 + 1);
  }
  return __s;
}

