// rea decompile_all
// name: CakeOrder.Home.UpgradeRebalanceNotice$$BuildAsync
// address: 0x43319d0
// body: available
// range: 0x43319d0-0x4331d9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4331d88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4331d8c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4331d98 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UpgradeRebalanceNotice__BuildAsync(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((DAT_095176d7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_09188790);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ddb18);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_0918c900);
    FUN_03f5c2a4(&DAT_092201a8);
    FUN_03f5c2a4(&DAT_092201b0);
    DAT_095176d7 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09188790);
  CakeOrder_Home_NewVersionNoticeContent___ctor();
  if (lVar2 != 0) {
    lVar8 = *(long *)(lVar2 + 0x10);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = CakeOrder_Localization_CakeLocalization__Tr(DAT_092201b0,0);
    lVar4 = DAT_091b0570;
    if (lVar8 != 0) {
      lVar6 = *(long *)(lVar8 + 0x10);
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar8,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                      );
        }
        if (*(int *)(DAT_0918c900 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar8 = **(long **)(DAT_0918c900 + 0xb8);
        if (lVar8 != 0) {
          if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
            uVar10 = 0;
            uVar7 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
            do {
              if (uVar7 <= uVar10) {
LAB_04331d8c:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar6 = *(long *)(lVar8 + 0x20 + uVar10 * 8);
              lVar4 = *(long *)(DAT_091b4b60 + 0x20);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_03f95a6c();
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_03f95a6c();
              }
              if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_04331d88;
              lVar4 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO
                                (**(long **)(lVar4 + 0xb8),lVar6,0);
              lVar9 = *(long *)(lVar2 + 0x10);
              plVar5 = (long *)FUN_03f5c394(DAT_09180318,1);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188ad0);
              }
              uVar7 = UnityEngine_Object__op_Inequality(lVar4,0,0);
              uVar3 = DAT_092201a8;
              if ((uVar7 & 1) != 0) {
                if (lVar4 == 0) goto LAB_04331d88;
                lVar6 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedName(lVar4,0);
              }
              if (plVar5 == (long *)0x0) goto LAB_04331d88;
              if ((lVar6 != 0) &&
                 (lVar4 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)) {
                uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar3,0);
              }
              if ((int)plVar5[3] == 0) goto LAB_04331d8c;
              plVar5[4] = lVar6;
              thunk_FUN_03f5d7b8(plVar5 + 4,lVar6);
              if (*(int *)(DAT_09182278 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar3 = CakeOrder_Localization_CakeLocalization__TrFormat(uVar3,plVar5,0);
              lVar4 = DAT_091b0570;
              if (lVar9 == 0) goto LAB_04331d88;
              lVar6 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar6 == 0) goto LAB_04331d88;
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar9,uVar3,
                             *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              uVar7 = (ulong)*(uint *)(lVar8 + 0x18);
              uVar10 = uVar10 + 1;
            } while ((long)uVar10 < (long)(int)*(uint *)(lVar8 + 0x18));
          }
          if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_04e124a4(&local_78,lVar2,DAT_091ddb18);
          param_1[1] = uStack_70;
          *param_1 = local_78;
          param_1[2] = local_68;
          return;
        }
      }
    }
  }
LAB_04331d88:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

