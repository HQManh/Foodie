// rea decompile_all
// name: FUN_03f80c7c
// address: 0x3f80c7c
// body: available
// range: 0x3f80c7c-0x3f80ef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_03f80c7c(code *param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int local_58;
  int local_54;
  int local_48;
  int local_44;
  
  if (uRam0000000009534888 != 0) {
    uVar9 = (ulong)uRam0000000009534888 - 1;
    uVar12 = 3;
    uVar11 = 2;
    uVar14 = 1;
    uVar13 = 0;
    uVar6 = (ulong)uRam0000000009534888 + 3 & 0x1fffffffc;
    puVar7 = (undefined4 *)(*plRam0000000009534890 + 0x2c);
    do {
      if (uVar13 <= uVar9) {
        puVar7[-8] = 0;
      }
      if (uVar14 <= uVar9) {
        puVar7[-4] = 0;
      }
      if (uVar11 <= uVar9) {
        *puVar7 = 0;
      }
      if (uVar12 <= uVar9) {
        puVar7[4] = 0;
      }
      uVar11 = uVar11 + 4;
      uVar12 = uVar12 + 4;
      uVar13 = uVar13 + 4;
      uVar14 = uVar14 + 4;
      uVar6 = uVar6 - 4;
      puVar7 = puVar7 + 0x10;
    } while (uVar6 != 0);
  }
  FUN_03f5c2c8(1);
  iVar3 = thunk_FUN_03f8c4ac(plRam0000000009534890,uRam0000000009534888,0xffffffff,&local_54,
                             &local_58);
  FUN_03f5c2c8(0);
  plVar8 = plRam0000000009534890;
  if ((iVar3 == -3) || (local_54 == -1)) {
    if (local_58 == 9) {
      uVar6 = (ulong)uRam0000000009534888;
      local_48 = 0;
      if ((int)uRam0000000009534888 < 1) {
        local_54 = 0;
      }
      else {
        lVar10 = 0;
        iVar3 = 0;
        do {
          lVar5 = *plVar8;
          if (*(long *)(lVar5 + lVar10) != -1) {
            iVar4 = thunk_FUN_03f8c5dc(lVar5 + lVar10,0,&local_44,&local_48);
            if (iVar4 == -3) {
              if (local_48 == 9) {
                iVar3 = iVar3 + 1;
                lVar5 = *plVar8 + lVar10;
                *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 0x20;
              }
            }
            else if (0 < local_44) {
              iVar3 = iVar3 + 1;
            }
          }
          lVar10 = lVar10 + 0x10;
          local_54 = iVar3;
        } while (uVar6 * 0x10 - lVar10 != 0);
      }
    }
    else if (local_58 == 4) {
      FUN_03faf7ac();
      return 0;
    }
  }
  if (local_54 != -1) {
    if ((local_54 != 0) && (uVar6 = (ulong)uRam0000000009534888, uRam0000000009534888 != 0)) {
      lVar10 = 0;
      uVar9 = 0;
      plVar8 = plRam0000000009534890;
      do {
        lVar5 = *(long *)(*plVar8 + lVar10);
        if ((lVar5 != -1) && (uVar1 = *(uint *)(*plVar8 + lVar10 + 0xc), uVar1 != 0)) {
          bVar2 = (uVar1 & 0x39) != 0;
          if ((uVar1 & 0x3c) != 0) {
            bVar2 = bVar2 | 2;
          }
          if ((uVar1 & 0x38) != 0) {
            bVar2 = bVar2 | 4;
          }
          (*param_1)(lVar5,bVar2,param_2);
          local_54 = local_54 + -1;
          if (local_54 == 0) {
            return 0;
          }
          uVar6 = (ulong)uRam0000000009534888;
          plVar8 = plRam0000000009534890;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while (uVar9 < uVar6);
    }
    return 0;
  }
  return 0xffffffff;
}

