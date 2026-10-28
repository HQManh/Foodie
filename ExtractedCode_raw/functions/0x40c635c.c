// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$GetGatheredPieces
// address: 0x40c635c
// body: available
// range: 0x40c635c-0x40c6657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c6654 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__GetGatheredPieces
               (long param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09515f95 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a8608);
    FUN_03f5c2a4(&DAT_0917b388);
    FUN_03f5c2a4(&DAT_0917b528);
    FUN_03f5c2a4(&DAT_091af040);
    FUN_03f5c2a4(&DAT_091af050);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515f95 = 1;
  }
  local_70 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (param_3 != 0) {
    *(undefined4 *)(param_3 + 0x18) = 0;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
    if (param_2 == (long *)0x0) {
      return;
    }
    lVar3 = AnhPD_FoodOrder_ServeShelfController__get_Info();
    if (*(long *)(param_1 + 0xe0) != 0) {
      FUN_053ebbdc(*(long *)(param_1 + 0xe0),DAT_091a8608);
      iVar9 = 0;
      do {
        lVar5 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917b388) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_040c64a8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b388,0);
LAB_040c64a8:
        iVar2 = (*(code *)*puVar4)(param_2,puVar4[1]);
        if (iVar2 <= iVar9) {
          return;
        }
        lVar5 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917b528) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_040c6508;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b528,0);
LAB_040c6508:
        (*(code *)*puVar4)(&local_120,param_2,iVar9,puVar4[1]);
        memcpy(&local_b0,&local_120,0x48);
        if ((lVar3 == 0) || ((uStack_88 & 1) == 0)) {
LAB_040c655c:
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar4 = *(undefined8 **)(DAT_09189158 + 0xb8);
          uStack_c8 = puVar4[1];
          local_d0 = *puVar4;
          local_c0 = puVar4[2];
        }
        else {
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&uStack_a0,0);
          if ((uVar7 & 1) != 0) goto LAB_040c655c;
          memcpy(&local_120,&local_b0,0x48);
          local_130 = local_100;
          uStack_138 = uStack_108;
          local_140 = local_110;
          AnhPD_FoodOrder_ServeShelfController__GatherFor(&local_d0,param_1,&local_140,lVar3);
        }
        lVar5 = DAT_091af040;
        lVar6 = *(long *)(param_3 + 0x10);
        *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
        if (lVar6 == 0) break;
        uVar1 = *(uint *)(param_3 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar1 * 0x18;
          *(uint *)(param_3 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + 0x28) = uStack_c8;
          *(undefined8 *)(lVar6 + 0x20) = local_d0;
          *(undefined8 *)(lVar6 + 0x30) = local_c0;
        }
        else {
          uStack_118 = uStack_c8;
          local_120 = local_d0;
          local_110 = local_c0;
          FUN_057f7d3c(param_3,&local_120,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        iVar9 = iVar9 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

