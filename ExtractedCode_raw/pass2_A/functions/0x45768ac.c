// rea decompile_all
// name: DG.Tweening.Core.TweenManager$$DoGetTweensById
// address: 0x45768ac
// body: available
// range: 0x45768ac-0x4576aeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4576ae4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4576ae8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int DG_Tweening_Core_TweenManager__DoGetTweensById
              (long *param_1,ulong param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  int local_68;
  
  if ((DAT_095188da & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1128);
    FUN_03f5c2a4(&DAT_0918c158);
    DAT_095188da = 1;
  }
  if (param_1 != (long *)0x0) {
    if (*param_1 == DAT_09535468) {
      local_68 = 0;
      bVar4 = false;
      bVar3 = true;
      plVar11 = param_1;
      goto LAB_04576978;
    }
    if (*param_1 == DAT_09535420) {
      piVar6 = (int *)thunk_FUN_03f99594(param_1);
      local_68 = *piVar6;
      bVar3 = false;
      bVar4 = true;
      plVar11 = (long *)0x0;
      goto LAB_04576978;
    }
  }
  local_68 = 0;
  bVar4 = false;
  bVar3 = false;
  plVar11 = (long *)0x0;
LAB_04576978:
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = *(uint *)(*(long *)(DAT_0918c158 + 0xb8) + 0x18);
  if ((int)uVar1 < 1) {
    iVar12 = 0;
  }
  else {
    uVar13 = 0;
    iVar12 = 0;
    do {
      if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar9 = *(long *)(*(long *)(DAT_0918c158 + 0xb8) + 0x48);
      if (lVar9 == 0) goto LAB_04576ae4;
      if (*(uint *)(lVar9 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
      if (lVar9 != 0) {
        if (bVar3) {
          if ((*(long *)(lVar9 + 0x38) != 0) &&
             (uVar7 = System_String__op_Inequality(*(long *)(lVar9 + 0x38),plVar11,0),
             (uVar7 & 1) == 0)) goto LAB_04576a2c;
        }
        else if (bVar4) {
          if (*(int *)(lVar9 + 0x40) == local_68) {
LAB_04576a2c:
            lVar5 = DAT_091b1128;
            if ((((param_2 & 1) == 0) || (*(char *)(lVar9 + 0x110) != '\0')) &&
               (iVar12 = iVar12 + 1, (param_3 & 1) != 0)) {
              if (param_4 == 0) {
LAB_04576ae4:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar10 = *(long *)(param_4 + 0x10);
              *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_04576ae4;
              uVar2 = *(uint *)(param_4 + 0x18);
              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(param_4 + 0x18) = uVar2 + 1;
                plVar8 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
                *plVar8 = lVar9;
                thunk_FUN_03f5d7b8(plVar8,lVar9);
              }
              else {
                FUN_057e0c68(param_4,lVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        else if ((*(long *)(lVar9 + 0x30) != 0) &&
                (uVar7 = System_Object__Equals(param_1,*(long *)(lVar9 + 0x30),0), (uVar7 & 1) != 0)
                ) goto LAB_04576a2c;
      }
      uVar13 = uVar13 + 1;
    } while (uVar1 != uVar13);
  }
  return iVar12;
}

