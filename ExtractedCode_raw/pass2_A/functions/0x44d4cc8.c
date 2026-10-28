// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingDishDeliveryMotion$$Play
// address: 0x44d4cc8
// body: available
// range: 0x44d4cc8-0x44d5003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d4fb4 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44d4fb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d5000 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingDishDeliveryMotion__Play
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               float param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  
  if ((DAT_095182e4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917f008);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd28);
    FUN_03f5c2a4(&DAT_091dbee0);
    FUN_03f5c2a4(&DAT_091dbfe8);
    FUN_03f5c2a4(&DAT_091e6af8);
    FUN_03f5c2a4(&DAT_091e6b00);
    FUN_03f5c2a4(&DAT_0918eec8);
    DAT_095182e4 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918eec8);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    puVar6 = (undefined8 *)(lVar2 + 0x10);
    *puVar6 = param_6;
    thunk_FUN_03f5d7b8(puVar6,param_6);
    plVar5 = (long *)(lVar2 + 0x38);
    *plVar5 = param_8;
    thunk_FUN_03f5d7b8(plVar5,param_8);
    *(undefined8 *)(lVar2 + 0x48) = param_7;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x48),param_7);
    *(undefined8 *)(lVar2 + 0x60) = param_9;
    *(undefined4 *)(lVar2 + 0x50) = param_1;
    *(undefined4 *)(lVar2 + 0x54) = param_2;
    *(undefined4 *)(lVar2 + 0x58) = param_3;
    *(undefined4 *)(lVar2 + 0x5c) = param_4;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x60),param_9);
    uVar4 = *puVar6;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar3 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_09181550);
      uVar4 = thunk_FUN_03f9944c();
      uVar13 = thunk_FUN_03fc39d4(&DAT_09220d38);
      System_ArgumentNullException___ctor(uVar4,uVar13,0);
      uVar13 = thunk_FUN_03fc39d4(&DAT_091c63e0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar13);
    }
    if (*plVar5 != 0) {
      fVar7 = *(float *)(*plVar5 + 0x14);
      fVar9 = 0.0;
      fVar10 = 0.001;
      fVar14 = 0.0;
      if (0.0 <= fVar7) {
        fVar14 = fVar7;
      }
      fVar7 = fVar10;
      if (0.001 <= param_5) {
        fVar7 = param_5;
      }
      *(float *)(lVar2 + 0x18) = fVar14;
      *(float *)(lVar2 + 0x40) = fVar7;
      if (*(long *)(lVar2 + 0x10) != 0) {
        fVar8 = (float)UnityEngine_Transform__get_position(*(long *)(lVar2 + 0x10),0);
        *(float *)(lVar2 + 0x1c) = fVar8;
        *(float *)(lVar2 + 0x20) = fVar9;
        cVar1 = DAT_09515faa;
        *(float *)(lVar2 + 0x24) = fVar10;
        if (cVar1 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515faa = '\x01';
        }
        uVar4 = DAT_0917f008;
        if (*plVar5 != 0) {
          fVar12 = *(float *)(*plVar5 + 0x10);
          uVar13 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
          fVar11 = *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x20);
          *(ulong *)(lVar2 + 0x28) =
               CONCAT44(fVar9 + (float)((ulong)uVar13 >> 0x20) * fVar12,
                        fVar8 + (float)uVar13 * fVar12);
          *(float *)(lVar2 + 0x30) = fVar10 + fVar11 * fVar12;
          uVar4 = thunk_FUN_03f9944c(uVar4);
          FUN_063be1d4(uVar4,lVar2,DAT_091e6af8,0);
          uVar4 = DG_Tweening_DOVirtual__Float(0,fVar7 + fVar14,fVar7 + fVar14,uVar4,0);
          uVar4 = FUN_04d95e8c(uVar4,1,DAT_091dbee0);
          uVar4 = FUN_04d9642c(uVar4,*(undefined8 *)(lVar2 + 0x10),DAT_091dbfe8);
          uVar13 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar13,lVar2,DAT_091e6b00,0);
          FUN_04d956bc(uVar4,uVar13,DAT_091dbd28);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

