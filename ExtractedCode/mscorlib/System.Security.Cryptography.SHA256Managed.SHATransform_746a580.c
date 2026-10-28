// rea decompile_all
// name: System.Security.Cryptography.SHA256Managed$$SHATransform
// address: 0x746a580
// body: available
// range: 0x746a580-0x746ab0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x746ab08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x746ab0c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_SHA256Managed__SHATransform
               (long param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint local_74;
  uint local_70;
  uint local_6c;
  
  if ((DAT_095211ba & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a490);
    DAT_095211ba = 1;
  }
  local_6c = *param_2;
  uVar11 = param_2[1];
  local_70 = param_2[6];
  local_74 = param_2[7];
  uVar10 = param_2[2];
  uVar9 = param_2[3];
  uVar1 = param_2[4];
  uVar8 = param_2[5];
  System_Security_Cryptography_Utils__DWORDFromBigEndian(param_1,0x10,param_3);
  if (*(int *)(DAT_0918a490 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Security_Cryptography_SHA256Managed__SHA256Expand(param_1);
  lVar7 = 0x20;
  uVar12 = 0;
  while( true ) {
    if (*(int *)(DAT_0918a490 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar3 = System_Security_Cryptography_SHA256Managed__Sigma_1(uVar1);
    lVar6 = **(long **)(DAT_0918a490 + 0xb8);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) {
LAB_0746ab0c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    iVar3 = (uVar1 & uVar8) + local_74 + (local_70 & (uVar1 ^ 0xffffffff)) + iVar3 +
            *(int *)(param_1 + lVar7 + -0x20) + *(int *)(lVar6 + lVar7);
    uVar9 = iVar3 + uVar9;
    iVar4 = System_Security_Cryptography_SHA256Managed__Sigma_0(local_6c);
    iVar5 = System_Security_Cryptography_SHA256Managed__Sigma_1(uVar9);
    lVar6 = **(long **)(DAT_0918a490 + 0xb8);
    if (lVar6 == 0) break;
    if ((ulong)*(uint *)(lVar6 + 0x18) <= uVar12 + 1) goto LAB_0746ab0c;
    local_74 = iVar3 + ((uVar11 ^ uVar10) & local_6c ^ uVar11 & uVar10) + iVar4;
    iVar3 = iVar5 + local_70 + (uVar9 & uVar1) + (uVar8 & (uVar9 ^ 0xffffffff)) +
            *(int *)(lVar6 + lVar7 + 4) + *(int *)(param_1 + lVar7 + -0x1c);
    uVar10 = iVar3 + uVar10;
    iVar4 = System_Security_Cryptography_SHA256Managed__Sigma_0(local_74);
    iVar5 = System_Security_Cryptography_SHA256Managed__Sigma_1(uVar10);
    lVar6 = **(long **)(DAT_0918a490 + 0xb8);
    if (lVar6 == 0) break;
    if ((ulong)*(uint *)(lVar6 + 0x18) <= uVar12 + 2) goto LAB_0746ab0c;
    local_70 = iVar3 + (local_74 & (local_6c ^ uVar11) ^ local_6c & uVar11) + iVar4;
    iVar3 = iVar5 + uVar8 + (uVar10 & uVar9) + (uVar1 & (uVar10 ^ 0xffffffff)) +
            *(int *)(lVar6 + lVar7 + 8) + *(int *)(param_1 + lVar7 + -0x18);
    uVar11 = iVar3 + uVar11;
    iVar4 = System_Security_Cryptography_SHA256Managed__Sigma_0(local_70);
    iVar5 = System_Security_Cryptography_SHA256Managed__Sigma_1(uVar11);
    lVar6 = **(long **)(DAT_0918a490 + 0xb8);
    if (lVar6 == 0) break;
    if ((ulong)*(uint *)(lVar6 + 0x18) <= uVar12 + 3) goto LAB_0746ab0c;
    uVar8 = iVar3 + (local_70 & (local_74 ^ local_6c) ^ local_74 & local_6c) + iVar4;
    iVar3 = iVar5 + uVar1 + (uVar11 & uVar10) + (uVar9 & (uVar11 ^ 0xffffffff)) +
            *(int *)(lVar6 + lVar7 + 0xc) + *(int *)(param_1 + lVar7 + -0x14);
    local_6c = iVar3 + local_6c;
    iVar4 = System_Security_Cryptography_SHA256Managed__Sigma_0(uVar8);
    iVar5 = System_Security_Cryptography_SHA256Managed__Sigma_1(local_6c);
    lVar6 = **(long **)(DAT_0918a490 + 0xb8);
    if (lVar6 == 0) break;
    if ((ulong)*(uint *)(lVar6 + 0x18) <= uVar12 + 4) goto LAB_0746ab0c;
    uVar1 = iVar3 + (uVar8 & (local_70 ^ local_74) ^ local_70 & local_74) + iVar4;
    iVar3 = iVar5 + uVar9 + (local_6c & uVar11) + (uVar10 & (local_6c ^ 0xffffffff)) +
            *(int *)(lVar6 + lVar7 + 0x10) + *(int *)(param_1 + lVar7 + -0x10);
    local_74 = iVar3 + local_74;
    iVar4 = System_Security_Cryptography_SHA256Managed__Sigma_0(uVar1);
    iVar5 = System_Security_Cryptography_SHA256Managed__Sigma_1(local_74);
    lVar6 = **(long **)(DAT_0918a490 + 0xb8);
    if (lVar6 == 0) break;
    if ((ulong)*(uint *)(lVar6 + 0x18) <= uVar12 + 5) goto LAB_0746ab0c;
    uVar9 = iVar3 + (uVar1 & (uVar8 ^ local_70) ^ uVar8 & local_70) + iVar4;
    iVar3 = iVar5 + uVar10 + (local_74 & local_6c) + (uVar11 & (local_74 ^ 0xffffffff)) +
            *(int *)(lVar6 + lVar7 + 0x14) + *(int *)(param_1 + lVar7 + -0xc);
    local_70 = iVar3 + local_70;
    iVar4 = System_Security_Cryptography_SHA256Managed__Sigma_0(uVar9);
    iVar5 = System_Security_Cryptography_SHA256Managed__Sigma_1(local_70);
    lVar6 = **(long **)(DAT_0918a490 + 0xb8);
    if (lVar6 == 0) break;
    if ((ulong)*(uint *)(lVar6 + 0x18) <= uVar12 + 6) goto LAB_0746ab0c;
    uVar10 = iVar3 + (uVar9 & (uVar1 ^ uVar8) ^ uVar1 & uVar8) + iVar4;
    iVar3 = iVar5 + uVar11 + (local_70 & local_74) + (local_6c & (local_70 ^ 0xffffffff)) +
            *(int *)(lVar6 + lVar7 + 0x18) + *(int *)(param_1 + lVar7 + -8);
    uVar8 = iVar3 + uVar8;
    iVar4 = System_Security_Cryptography_SHA256Managed__Sigma_0(uVar10);
    iVar5 = System_Security_Cryptography_SHA256Managed__Sigma_1(uVar8);
    lVar6 = **(long **)(DAT_0918a490 + 0xb8);
    if (lVar6 == 0) break;
    if ((ulong)*(uint *)(lVar6 + 0x18) <= uVar12 + 7) goto LAB_0746ab0c;
    uVar11 = iVar3 + (uVar10 & (uVar9 ^ uVar1) ^ uVar9 & uVar1) + iVar4;
    iVar3 = iVar5 + local_6c + (uVar8 & local_70) + (local_74 & (uVar8 ^ 0xffffffff)) +
            *(int *)(lVar6 + lVar7 + 0x1c) + *(int *)(param_1 + lVar7 + -4);
    uVar1 = iVar3 + uVar1;
    iVar4 = System_Security_Cryptography_SHA256Managed__Sigma_0(uVar11);
    lVar7 = lVar7 + 0x20;
    bVar2 = 0x37 < uVar12;
    local_6c = iVar3 + (uVar11 & (uVar10 ^ uVar9) ^ uVar10 & uVar9) + iVar4;
    uVar12 = uVar12 + 8;
    if (bVar2) {
      *param_2 = *param_2 + local_6c;
      param_2[1] = param_2[1] + uVar11;
      param_2[2] = param_2[2] + uVar10;
      param_2[3] = param_2[3] + uVar9;
      param_2[4] = param_2[4] + uVar1;
      param_2[5] = param_2[5] + uVar8;
      param_2[6] = param_2[6] + local_70;
      param_2[7] = param_2[7] + local_74;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

