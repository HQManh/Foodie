// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.TraySkew$$GenerateNewSkew
// address: 0x41c2854
// body: available
// range: 0x41c2854-0x41c2b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c2b08 to 0x41be218 Datpt.Cook_Order.Level_SimpleBBQ.Skew$$OnAppear (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41c2b0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Level_SimpleBBQ_TraySkew__GenerateNewSkew
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_095169b2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091d5028);
    FUN_03f5c2a4(&DAT_091f0f10);
    FUN_03f5c2a4(&DAT_09195230);
    DAT_095169b2 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09195230);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x18) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),param_4);
    if (*(long *)(param_4 + 0x28) != 0) {
      uVar6 = *(undefined8 *)(param_4 + 0x20);
      fVar8 = (float)UnityEngine_Transform__get_position(*(long *)(param_4 + 0x28),0);
      if (DAT_09515cf0 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf0 = '\x01';
      }
      lVar3 = *(long *)(DAT_0918cbd0 + 0xb8);
      fVar9 = *(float *)(lVar3 + 0x3c);
      fVar10 = *(float *)(lVar3 + 0x40);
      fVar11 = *(float *)(lVar3 + 0x44);
      lVar3 = UnityEngine_Component__get_transform(param_4,0);
      if (lVar3 != 0) {
        param_3 = param_3 + fVar11 * 0.5;
        param_2 = param_2 + fVar10 * 0.5;
        uVar2 = UnityEngine_Transform__GetParent(lVar3,0);
        lVar3 = FUN_04c384b8(fVar8 + fVar9 * 0.5,param_2,param_3,uVar6,uVar2,DAT_091d5028);
        plVar7 = (long *)(lVar1 + 0x10);
        *plVar7 = lVar3;
        thunk_FUN_03f5d7b8(plVar7,lVar3);
        if (*plVar7 != 0) {
          Datpt_Cook_Order_Level_SimpleBBQ_Skew__Reset();
          if (*plVar7 != 0) {
            lVar3 = UnityEngine_Component__get_transform(*plVar7,0);
            if (*(long *)(param_4 + 0x28) != 0) {
              fVar8 = (float)UnityEngine_Transform__get_position(*(long *)(param_4 + 0x28),0);
              if (DAT_09515cf0 == '\0') {
                FUN_03f5c2a4(&DAT_0918cbd0);
                DAT_09515cf0 = '\x01';
              }
              if (lVar3 != 0) {
                lVar4 = *(long *)(DAT_0918cbd0 + 0xb8);
                UnityEngine_Transform__set_position
                          (fVar8 + *(float *)(lVar4 + 0x3c) * 0.5,
                           param_2 + *(float *)(lVar4 + 0x40) * 0.5,
                           param_3 + *(float *)(lVar4 + 0x44) * 0.5,lVar3,0);
                if (*plVar7 != 0) {
                  lVar3 = UnityEngine_Component__get_transform(*plVar7,0);
                  if (DAT_09515ed5 == '\0') {
                    FUN_03f5c2a4(&DAT_091898c0);
                    DAT_09515ed5 = '\x01';
                  }
                  if (lVar3 != 0) {
                    puVar5 = *(undefined4 **)(DAT_091898c0 + 0xb8);
                    UnityEngine_Transform__set_localRotation
                              (*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar3,0);
                    *(undefined8 *)(param_4 + 0x30) = *(undefined8 *)(lVar1 + 0x10);
                    thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x30));
                    lVar3 = *(long *)(lVar1 + 0x10);
                    uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
                    System_Action___ctor(uVar6,lVar1,DAT_091f0f10,0);
                    if (lVar3 != 0) {
                      Datpt_Cook_Order_Level_SimpleBBQ_Skew__OnAppear(lVar3,uVar6);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

