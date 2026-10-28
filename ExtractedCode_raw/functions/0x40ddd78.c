// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$JoinChain
// address: 0x40ddd78
// body: available
// range: 0x40ddd78-0x40ddff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ddff4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_ConveyorGrid__JoinChain(long param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 local_48;
  undefined4 local_44;
  long local_38;
  
  if ((DAT_09516043 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182bd8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919d578);
    FUN_03f5c2a4(&DAT_0919d590);
    FUN_03f5c2a4(&DAT_091abe60);
    FUN_03f5c2a4(&DAT_09213c08);
    FUN_03f5c2a4(&DAT_091f8328);
    DAT_09516043 = 1;
  }
  local_38 = 0;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x28) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar3 = FUN_06ef1fe8(*(long *)(param_1 + 0x28),*(int *)(param_2 + 0x28),&local_38,DAT_0919d578
                          );
      if ((uVar3 & 1) == 0) {
        iVar11 = *(int *)(param_2 + 0x2c);
        if (1 < iVar11) {
          uVar3 = AnhPD_FoodOrder_ConveyorGrid__HasQueuedLink
                            (param_1,*(undefined4 *)(param_2 + 0x28));
          if ((uVar3 & 1) == 0) {
            local_44 = *(undefined4 *)(param_2 + 0x28);
            uVar6 = FUN_03f5c42c(DAT_09535420,&local_44);
            uVar6 = System_String__Format(DAT_09213c08,uVar6,0);
            local_48 = *(undefined4 *)(param_2 + 0x2c);
            uVar7 = FUN_03f5c42c(DAT_09535420,&local_48);
            uVar8 = AnhPD_FoodOrder_ConveyorGrid__DescribeBundle(param_2);
            uVar7 = System_String__Format(DAT_091f8328,uVar7,uVar8,0);
            uVar6 = System_String__Concat(uVar6,uVar7,0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091835d0);
            }
            UnityEngine_Debug__LogError(uVar6,0);
            *(undefined4 *)(param_2 + 0x28) = 0;
            return 0;
          }
          iVar11 = *(int *)(param_2 + 0x2c);
        }
        uVar1 = *(undefined4 *)(param_2 + 0x28);
        lVar4 = thunk_FUN_03f9944c(DAT_09182bd8);
        AnhPD_FoodOrder_ConveyorChain___ctor(lVar4,uVar1,iVar11);
        local_38 = lVar4;
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_040ddff4;
        FUN_06ef04f8(*(long *)(param_1 + 0x28),*(undefined4 *)(param_2 + 0x28),lVar4,DAT_0919d590);
      }
      lVar4 = DAT_091abe60;
      if ((local_38 != 0) && (lVar5 = *(long *)(local_38 + 0x18), lVar5 != 0)) {
        lVar9 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
            *puVar10 = param_3;
            thunk_FUN_03f5d7b8(puVar10,param_3);
            return local_38;
          }
          FUN_057e0c68(lVar5,param_3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          return local_38;
        }
      }
    }
  }
LAB_040ddff4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

